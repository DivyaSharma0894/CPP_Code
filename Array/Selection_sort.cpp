#include<iostream>
//#include<cmath>
using namespace std;
int selection_sort(int arr[100],int n){
   
    for(int j=0;j<n;j++){
         int min_index=j;
    for(int i=j;i<n;i++){
        if(arr[i]<arr[min_index]){
            min_index=i;
        }

    }
    
        swap(arr[j],arr[min_index]);}
}
int main(){
    int arr[100]={0};
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   selection_sort(arr,n);
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
    return 0;
}