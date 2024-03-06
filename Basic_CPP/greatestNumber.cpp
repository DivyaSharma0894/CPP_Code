#include<iostream>
using namespace std;
int main(){int a,b,c;
    cout<<"enter 3 numbers"<<endl;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<a<< " is greatest number"<<endl;
        }
        else{cout<<c<<" is the greatest number"<<endl;}
    }
    else{
        if(b>c){
            cout<<b<< " is greatest number"<<endl;
        }
        else{cout<<c<<" is the greatest number"<<endl;}
    }
    return 0;
}