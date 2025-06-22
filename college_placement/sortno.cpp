#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,e,f;
    cin>>a>>b>>c;
    int sum=a+b+c;
    if(a<b){
        d=max(b,c);
    }
    else{
        d=max(a,c);
    }
   if(a>b){
        f=min(b,c);
    }
    else{
        f=min(a,c);
    }
  
    e=sum-d-f;
    cout<<f<<endl;
    cout<<e<<endl;
    cout<<d<<endl;
    cout<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;

}