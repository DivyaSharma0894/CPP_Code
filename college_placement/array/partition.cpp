#include<iostream>
using namespace std;

int main(){
    int arr[6]={1,4,0,5,2,3};
    int ans=5;
    int k=3;
    int elements=6/k;
   int  count=0;
   int sum=0;
   int i=0;
    for( i=0;i<6;i++){
        if(count==elements){
            if(sum!=ans){
                cout<<"false"<<endl;
                break;
            }
            sum=0;
            count=0;
        }
        sum=sum+arr[i];
        count++;
    }
    if(i==6){
        cout<<"true";
    }
    

}