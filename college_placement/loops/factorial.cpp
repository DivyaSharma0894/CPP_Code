#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    while(n>0){
        cin>>m;
        int ans=1;
        for(int i=1;i<=m;i++){
            ans=ans*i;
        }
        cout<<ans<<endl;
        n--;
    }
}