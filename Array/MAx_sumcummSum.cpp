#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int cumsum[10]={0};
int ans=0;
int left;
int right;
int sum;
int maxsum;
cumsum[-1]=0;
int arr[5]={1,2,3,4,5};
for(int i=0;i<5;i++){
cumsum[i]=cumsum[i-1]+arr[i];
}
    for(int i=0;i<5;i++){ maxsum=0;
    int j;
     for(j=i;j<5;j++){
      sum=cumsum[j]-cumsum[i-1];
           
            }
            if(sum>maxsum){
                maxsum=sum;
                cout<<maxsum<<endl; 
               left =i;
                right =j;
            }

            
        
     
    } 
    
    
     
    return 0;
}