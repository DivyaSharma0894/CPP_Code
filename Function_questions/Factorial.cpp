#include<iostream>
using namespace std;

int Factorial(int n){int fac=1;
    for(int i = 1; i <=n;i++){
        fac=fac*i;

    }
    return fac;
}
int main(){int m ;
cout<<"enter number"<<endl;
cin>>m;
cout<<"factorial is "<<Factorial(m)<<endl;
    return 0;
}