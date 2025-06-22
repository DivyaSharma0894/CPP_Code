#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int m=n;
    int temp=0;
    while(n>0){
          temp=temp*10 + n%10;
        n=n/10;
       
    }
    cout<<temp<<endl;
    if(temp==m){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}