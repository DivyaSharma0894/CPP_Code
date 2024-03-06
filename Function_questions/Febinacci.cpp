#include<iostream>
using namespace std;
int febinacci(int n){
    int a1=0;
    int a2=1;
    cout<<a1<<" "<<a2<<" ";

    for(int i=2;i<=n;i++){
        int a3=a1+a2;
        cout<<a3<<" ";
        a1=a2;
        a2=a3;

    }
    return 0;
}
int main(){int m;
cin>>m;
febinacci(m);

    return 0;
}