#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n=5;
    int currsum=0;
    int maxsum= 0;
    int arr[5]={-1,-2,-3,4,5};
    for(int i=0;i<n;i++){
        currsum=currsum+arr[i];
        if(currsum<0){
            currsum=0;
        }
        maxsum=max(currsum,maxsum);
    }
    cout<<maxsum<<endl;
    return 0;
}