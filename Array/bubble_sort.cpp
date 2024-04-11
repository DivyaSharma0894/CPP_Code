#include<iostream>
using namespace std;
void Bubble_sort(int arr[100],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
           if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
           }
        }
    }}
int main(){
    int arr[100]={0};
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;
    cout<<"enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"unsorted array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
  cout<<endl<<"sorted array is"<<endl;
    Bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}