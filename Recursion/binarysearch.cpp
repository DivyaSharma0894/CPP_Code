#include<iostream>
using namespace std;
bool binarysearch(int* arr,int s,int e,int x){
    int mid=(s+e)/2;
    if(arr[mid]==x){return true;}
    if(s>e){
        return false;
    }
    
    if(x<arr[mid]) binarysearch(arr,s,mid-1,x);
    if(x>arr[mid]) binarysearch(arr,mid+1,e,x);

}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    cout<<(binarysearch(arr,0,4,9)?"yes":"NO");
}