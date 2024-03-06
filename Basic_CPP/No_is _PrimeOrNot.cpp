#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    for(int i=1;i*i<n;i++){
        if(n%i==0){
            cout<<"number is not prime"<<endl;
            break;
        }
    }
    return 0;

}