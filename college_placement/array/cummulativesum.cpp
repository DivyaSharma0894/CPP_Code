#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={-1,2,3,4,5,6};
    int cumsum[6]={0};
    int ans=0;
     int maxi=INT_MIN;
    int k=3;
    for(int i=0;i<6;i++){ans=0;
       for(int j=i;j<i+k;j++){
        ans=ans+arr[j];
       }
       maxi=max(maxi,ans);
    }
    cout<<maxi;
   
}