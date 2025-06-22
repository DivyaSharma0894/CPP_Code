#include<iostream>
using namespace std;
int main(){
    long long n=1;
    long long  m=1;
    while(n>=0 && m>=0){cin>>n>>m;
        if(n<=0 || m<=0){
            break;
        }
        else{
         
         long long mini=min(n,m);
         long long maxi=max(n,m);
         long long sum=0;
         for(long long  i=mini;i<=maxi;i++){
            cout<<i<<" ";
            sum+=i;
         }
         cout<<"sum"<<" ="<<sum<<endl;
        }
    }
}