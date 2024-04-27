#include<iostream>
using namespace std;
void Insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){int temp=arr[i];
    int j;
        for( j=i-1;j>=0;j--){
            if(arr[j]>temp) 
            {arr[j+1]=arr[j];
               
                
            }

        }
            {  arr[j+1]=temp;}

    }

}
int main(){
    int n;
    cin>>n;
    int arr[10]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Insertion_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
return 0;
}