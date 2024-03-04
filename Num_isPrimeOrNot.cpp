#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    bool flag=0;
    for(int i=2;i*i<n;i++){
        if(n%i==0){
            cout<<"number is not prime"<<endl;
            flag=1;

            break;
        }
        
    }
    if(flag==0){cout<<"number is prime"<<endl;}
    return 0;

}