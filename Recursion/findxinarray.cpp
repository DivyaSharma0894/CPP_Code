//Given an unsorted array of N elements and an element X. 
//The task is to write a recursive function to check whether the element X is present in the given array or not.
#include<iostream>
using namespace std;
bool find(int* arr,int l,int r,int x){
    if(arr[l]==x){
        return true;
    }
    if(l==r){
        return false;
    }
   return  find(arr,++l,r,x);
}
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<(find(arr,0,4,1)?"found":"Not Found");

}