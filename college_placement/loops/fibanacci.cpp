#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0;
    int b=1;
    int c=0;
    if(n==1){
        cout<<a;
    }
    else if(n==2){
        cout<<a<<" "<<b<<" ";
    }
   else{ cout<<a<<" "<<b<<" ";
    for(int i=0;i<n-2;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
}
}