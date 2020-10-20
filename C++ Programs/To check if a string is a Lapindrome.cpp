#include <iostream>
using namespace std;

bool isLap (string str){
    int r[26]={0};
    int l[26]={0};
    int s=str.length();
    for(int i=0;i<s/2;i++){
       int n= str[i]- 'a';
       l[n]++;
    }
    for(int i=(s+1)/2;i<s;i++){
        int p= str[i]-'a';
        r[p]++;
    }
    bool ret = true;
    for(int i=0;i<26;i++){
        if(l[i]!=r[i])
        ret = false;
    }
    return ret;
}

int main() {
    int t;
    string x;
    cin>>t;
    while(t--){
        cin>>x;
        cout<<(isLap(x)?"YES":"NO");
        cout<<endl;
    }
    return 0;
}
