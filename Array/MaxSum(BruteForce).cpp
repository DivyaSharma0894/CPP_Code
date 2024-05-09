#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int maxans=0;
int ans=0;
int left;
int right;

int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
     for(int j=i;j<5;j++){ans=0;
        for(int k=i;k<=j;k++){
           ans=ans+arr[k];
           
        }
           // maxans=max(ans,maxans);
            if(ans>maxans){maxans=ans;
             left=i; right=j;
            }
            
        
     }
    } 
     
      cout<<maxans<<" and array is ";
      for(int i=left;i<=right;i++){
         cout<<arr[i]<<" ";
      }
    return 0;
}