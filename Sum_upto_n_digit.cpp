#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"enter number upto which you require sum"<<endl;
    cin>>num;
    for(int i=1;i<=num;i++){
sum+=i;
    }
    cout<<"sum is "<<sum<<endl;
    return 0;
}