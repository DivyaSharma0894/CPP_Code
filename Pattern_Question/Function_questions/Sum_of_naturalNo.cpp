#include<iostream>
using namespace std;
int Sum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;

    }
    return sum;
}
int main(){int m;
cout<<"enter value of n"<<endl;
cin>>m;
cout<<Sum(m);
    return 0;
}