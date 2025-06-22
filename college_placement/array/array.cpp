#include<iostream>
#include<vector>
using namespace std;
int main(){
   int  arr[6]={1,1,2,4,4,5};
    int key=5;
    int start=0;
    int end=5;
    int flag=0;
    int count=0;
    vector<pair<int,int> >ans;
    while(start<end){
        if(arr[start]+arr[end]==key){
            flag=1;
            
             ans.push_back({start, end});
            
            start++;
            end--;
        }
        else if(arr[start]+arr[end]<key){
            start++;
        }
        else {
            end--;
        }
    }
    if (flag==1){
        cout<<"yes"<<"count is"<<count<<endl;
        for(auto k:ans){
            cout<<k.first<<" "<<k.second<<endl;
        }
    }
    else {
        cout<<"no";
    }
    return 0;
}