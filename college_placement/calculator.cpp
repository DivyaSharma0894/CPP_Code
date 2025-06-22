#include<iostream>
using namespace std;
int main(){
    int a,b,ans;
    char symbol;
    cin>>a>>symbol>>b;
    if(symbol=='+'){
        ans=a+b;
    }
    else if(symbol=='-'){
        ans=a-b;
    }
     else if(symbol=='*'){
        ans=a*b;
    }
    else{
        ans=a/b;
    }
    cout<<ans;

}