#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter numbers"<<endl;
    cin>>n;
    while(n>0){
        cout<<n<<endl;
        cout<<"enter numbers"<<endl;
        cin>>n;
    }
    cout<<"error! you have entered a negative  no."<<endl;
    return 0;
}