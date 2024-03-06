#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    if(n<10){
        cout<<n<<" is less than 10"<<endl;

    }
    else if(n>10){
        cout<<n<<" is greater than 10"<<endl;}
    else{
        cout<<n<<" is equal to 10"<<endl;
    }
    return 0;
}