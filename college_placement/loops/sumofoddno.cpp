#include<iostream>
using namespace std;
int main(){
    int a,b,n;
    cin>>n;
    while(n>0){
    cin>>a>>b;
    int sum=0;
    int mini=min(a,b);
    int maxi=max(a,b);
    for(int i=mini+1;i<maxi;i++){
        if(i%2!=0){
            sum+=i;
        }
    }cout<<sum<<endl;
    n--;
    }
}