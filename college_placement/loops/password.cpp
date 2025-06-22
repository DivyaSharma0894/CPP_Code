#include<iostream>
using namespace std;
int main(){
    int n;
    n=5;
    int arr[n]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==1999){
            cout<<"Correct";
            break;
        }
        else {cout<<"Wrong"<<endl;}
    }

}