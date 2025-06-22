#include<iostream>
using namespace std;
int main(){
    int arr1[6]={2,4,8,1,1,4};
    int arr2[3]={4,8,4,};
    int start=0;
    int end=5;
    int i=0;
    int j=2;
    while(start<=end && i<=j){
        if(arr2[i]==arr1[start]){
            i++;
        }
        if( i<=j && arr2[j]==arr1[end]){
            j--;
        }
        start++;
        end--;
    }
      if (i > j) {
        cout << "All elements of arr2 are present in arr1" << endl;
    } else {
        cout << "arr2 is not present in arr1" << endl;
    }
}