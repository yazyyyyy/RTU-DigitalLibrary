#include <bits/stdc++.h>
using namespace std;

void jets(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}



int main(){
    jets();
    long long n,w;
    cin>>n>>w;
    vector<long long > arr(n),weights(n);
    long long  dp[n+1][w+1];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<n;i++){
    	cin>>weights[i]>>arr[i];
    }
    for(long long i=0;i<n+1;i++){
    	for(long  j=0;j<w+1;j++){
    		if (i==0)
    			dp[i][j]=0;
    		else if (j==0)
    			dp[i][j]=0;
    		else if (weights[i-1]>j)
    			dp[i][j]=dp[i-1][j];
    		else
    			dp[i][j]=max(dp[i-1][j],arr[i-1]+dp[i-1][j-weights[i-1]]);
    	}
    }
    cout<<dp[n][w];

    return 0;
}
