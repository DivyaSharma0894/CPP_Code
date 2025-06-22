#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int mini=min(a,b);
    int maxi=max(a,b);
    int jhanda=0;
    for(int i=mini;i<=maxi;i++){
        int n=i;
        int flag=1;
        while(n>0){int ans=n%10;
        if(ans==7 || ans==4){
            n=n/10;
        }
        else{flag=0;
            break;}
            
        }
        if(flag==1){jhanda=1;
            cout<<i<<" ";
        }
    }
    if(jhanda==0){
        cout<<"-1";
    }
}