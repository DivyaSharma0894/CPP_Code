#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};
    int key=9;
    int i=0;
    int j=n-1;
    while(i<j){
        int cs=arr[i]+arr[j];
        if(cs<key){i++;

        }
        else if(cs>key){j--;}
        else{cout<<"1 is "<<arr[i]<<" and another is "<<arr[j]<<endl;
        j--;i++;}
    }
}