#include<iostream>
using namespace std;
int main(){
    char arr[]={'L','R','R','L','R','L','L'};
    int ans=0;
    int start=0;
    int end=6;
    for(int i=0;i<7;i++){
    if(arr[i]=='L'){
        ans+=i;
    }
    else if(arr[i]=='R'){
        ans+=7-1-i;
    }

  
}cout<<ans<<endl;
ans=0;
    while(start<end){
         if(arr[start]=='L')
        {arr[start]='R';
        break;
    }
    else if(arr[start]=='R'){
        start++;
    }
 if(arr[end]=='R'){
        arr[end]='L';
        break;
    }
    else if(arr[end]=='L'){
        end--;
    }
    }
for(int i=0;i<7;i++){
    if(arr[i]=='L'){
        ans+=i;
    }
    else if(arr[i]=='R'){
        ans+=7-1-i;
    }

  
}  for(int i=0;i<7;i++){
    cout<<arr[i]<<" ";
}
cout<<endl<<ans;
}