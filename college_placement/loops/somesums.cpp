#include<iostream>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    int m=n;
    int sum=0;
    int add=0;
    while(n>0){m=n;
    sum=0;
         while(m>0){
            int d=m%10;
            sum+=d;
            m=m/10;

        }
        if(sum>=a && sum<=b){
            add+=n;
        }
        n--;}
        cout<<add;
}