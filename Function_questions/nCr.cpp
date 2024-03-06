#include<iostream>
using namespace std;
int Factorial(int n){int fac=1;
    for(int i = 1; i <=n;i++){
        fac=fac*i;

    }
    return fac;
}
int nCr(int n,int r){
int ans=Factorial(n)/(Factorial(n-r)*Factorial(r));
}
int main(){int m,R;
cout<<"enter num and r"<<endl;
cin>>m>>R;
//Factorial(m);
cout<<nCr(m,R);

    return 0;
}