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
cout<<"enter num "<<endl;
cin>>m;
//Factorial(m);
//cout<<nCr(m,R);
for(int i=0;i<m;i++){
    for(int j=0;j<=i;j++){
        cout<<nCr(i,j)<<" ";

}cout<<endl;
}
    return 0;
}