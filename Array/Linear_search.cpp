//Search a given no i.e. Key in the array and give its index number
#include<iostream>
using namespace std;
int linear_search(int arr[100],int n,int key){
    bool flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<key<<"Found at index"<<i<<endl;
            flag=1;

            break;
        }
    }
    if(flag==0){cout<<"key not found"<<endl;}
}
int main(){
    int n;
    int arr[100]={0};
    cout<<"enter value of n"<<endl;
    cin>>n;
    cout<<"enter elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter key"<<endl;
    cin>>key;
    linear_search(arr,n,key);
   
    return 0;
}