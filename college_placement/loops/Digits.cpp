#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    for(int i=0;i<n;i++){
        cin>>m;
        if(m==0){
            cout<<m;
        }
        else{
        while(m>0){
            int d=m%10;
            cout<<d<<" ";
            m=m/10;
        }}
        cout<<endl;
    }
}