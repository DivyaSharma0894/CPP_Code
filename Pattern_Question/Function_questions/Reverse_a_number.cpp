#include<iostream>
using namespace std;
int Reverse(int n){int reverse=0;
    while(n>0){int LD=n%10;
    reverse=reverse*10 + LD;
    n=n/10;


}
return reverse;}
int main(){int m;
cout<<"enter number"<<endl;
cin>>m;
cout<<Reverse(m)<<endl;

    return 0;
}