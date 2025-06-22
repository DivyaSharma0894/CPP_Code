#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    char s;
    char q;
    cin>>a>>s>>b>>q>>c;
    if(s=='+' && c==a+b || s=='-' && c==a-b || s=='*' && c==a*b){
        cout<<"Yes";
    }
    else{
        if(s=='+'){
            cout<<a+b;
        }
        else if(s=='-'){
            cout<<a-b;
        }
        else {
            cout<<a*b;
        }
    }
}