#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int arr[2]={7,8};
   int maxi=INT_MIN;
   int maxi1=INT_MIN;
   for(int i=0;i<2;i++){
        maxi=max(maxi,arr[i]);
     }
     for(int i=0;i<2;i++){
        if(arr[i]!=maxi){
             maxi1=max(maxi1,arr[i]);
        }
     }
   cout<<"First maxima is "<<maxi<<"second  maxima is "<<maxi1<<endl;
    }
