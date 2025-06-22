#include<iostream>
using namespace std;
int main(){
    long long  a,b,c,d;
    cin>>a>>b>>c>>d;
    long long  mul=((a%100)*(b%100)*(c%100)*(d%100))% 100;
    long long ans=0;
    ans=mul%100;
  
    cout<<ans;
}