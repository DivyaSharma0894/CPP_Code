#include<iostream>
using namespace std;
int main(){
    int arr[10]={0};
    int n=sizeof(arr)/sizeof(int);
    cout<<"enter elements"<<endl;
    
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }
    arr[3]=1000;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
        
    }
    return 0;
}