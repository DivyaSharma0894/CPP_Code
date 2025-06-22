#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int mini=min(a,b);
    int ans=0;
    for(int i=1;i<=mini;i++){
        if(a%i==0 && b%i==0){  
            ans=i;
    }
}
cout<<ans;}
