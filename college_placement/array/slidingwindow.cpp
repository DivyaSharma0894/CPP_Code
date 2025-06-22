#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={1,50,3,4,6,2};
    int k=3;
    int start=0;
    int end=6-1;
    int sum=0;
    int count=0;
    int maxi=INT_MIN;
    while(count<k && start<=end){
        maxi=max(arr[start],arr[end]);
        if(maxi==arr[start]){
            start++;
        }
        else{end--;}
        sum=sum+maxi;
        count++;


    }
    cout<<sum;
  /* for(int j=0;j<=6-k;j++){maxi=0;
    for(int i=j;i<k+j;i++){
        maxi=max(maxi,arr[i]);
    }
    cout<<maxi<<" ";}
*/

cout<<-arr[2];

}