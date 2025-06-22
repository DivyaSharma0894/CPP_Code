#include<iostream>
using namespace std;
int main(){
    int arr[4][4]={5,2,6,1,3,4,5,2,12,11,4,3,1,2,6,2};
    
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            swap(arr[i][j],arr[3-i][j]);
            
        }
       
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
           cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}