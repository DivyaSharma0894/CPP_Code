#include<iostream>
using namespace std;
int main(){
    int arr[6]={4,5,6,2,8};
    int pivot=0;
    int j=0;
    int count=0;
    for(int i=0;i<6;i++){
        if(arr[i]>arr[(i+1)%6]){
            pivot=arr[i];
            count++;
        }
    }
    if(count>1){
        cout<<"false";
    }
   else{cout<<"True";}
    
}