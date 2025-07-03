#include<iostream>
using namespace std;
bool linearsearch(int * arr,int size,int x){
    if(*arr==x){
        return true;
    }
    if(size==0){
        return false;
    }
    return linearsearch(arr+1,size-1,x);
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    cout<<(linearsearch(arr,size,8)?"yes":"NO");

}