#include<iostream>
using namespace std;
int main(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long long mul=a*b*c*d;
    int ans=0;
    ans=mul%100;
  
    cout<<ans;
}