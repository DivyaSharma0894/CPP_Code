#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    int maxi=0;
    for(int i=0;i<n;i++){
        cin>>m;
        maxi=max(maxi,m);
    }
    cout<<maxi;
}