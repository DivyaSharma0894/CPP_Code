//binary search to find key 
#include<iostream>
using namespace std;
int Binary_Search(int arr[100],int n,int key){
    bool flag=0;
    int start=0;
    int end=n;
    while(start<end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            cout<<"Key is Found at index "<<mid<<endl;
            flag=1;
            break;
    }
    else if(arr[mid]<key){
        end=mid-1;
    }
    else if(arr[mid]>key){
        start=mid+1;
    }  

    }
    if(flag==0){
        cout<<"Invalid key"<<endl;
    }

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
    int key;
    cout<<"enter key"<<endl;
    cin>>key;
    Binary_Search(arr,n,key);
        return 0;
}