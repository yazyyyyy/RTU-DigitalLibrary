#include <iostream>
#include<sstream>
using namespace std;
int main() {
  int k;
  cout<<"Enter an integer value";
  cin>>k;
  stringstream ss;
  ss<<k;
  char s[10];
  ss>>s;
  cout<<"\n"<<"An integer value is : "<<k<<"\n";
  cout<<"String representation of an integer value is : "<<s;
}
