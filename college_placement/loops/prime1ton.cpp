#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=2;
    while(m<=n){int flag=0;
        for(int i=2;i<m;i++){
   if(m%i==0){
    flag=1;
    break;
   } }
   if(flag==0){
    cout<<m<<" ";
   }
   m++;
    }
}