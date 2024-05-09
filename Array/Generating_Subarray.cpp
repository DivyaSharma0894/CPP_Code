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
           cout<<arr[k]<<" ";
           
        }
        cout<<endl;
            
        
     }
    } 
     
     
    return 0;
}