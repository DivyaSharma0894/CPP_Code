#include<iostream>
using namespace std;
int main(){
    char a;
    cin>>a;
    if(a>64 && a<91){
        a=a+32;
    }
    else{a=a-32;}
    cout<<a;
}