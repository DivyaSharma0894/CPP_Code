#include<iostream>
using namespace std;
int main(){
    char a;
    cin>>a;
    if((a)>47 && a<58){
        cout<<"IS DIGIT";
    }
    else {
        cout<<"ALPHA"<<endl;
        if(a>64 && a<91){
            cout<<"IS CAPITAL";
        }
        else{
            cout<<"IS SMALL";
        }
    }
}