//Find largest and smallest element in array
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int smallest=INT_MAX;
    int largest=INT_MIN;
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter elements"<<endl;
    int arr[100]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
        if(arr[i]>largest){
            largest=arr[i];
}}
cout<<"smaalest element is "<<smallest<<" and largest element is "<<largest<<endl;
return 0;
}
