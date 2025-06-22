#include<iostream>
using namespace std;
int main(){int maxi=0;
int ans=0;
  int arr[6]={1,2,3,4,5,6};
  int count=0;
  int key=5;
  int sum;
  for(int i=0;i<6;i++){sum=0;
    for(int j=i;j<6;j++){
        
            sum+=arr[j];
        
    ans=(j-i+1);
    if(sum==key){
        maxi=max(maxi,ans);
        count++;
    }}
  }cout<<count<<" "<<maxi;
}
