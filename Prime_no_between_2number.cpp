#include<iostream>
using namespace std;
int main(){
    int a,b;
   
    cout<<"enter 2 numbers "<<endl;
    cin>>a>>b;
     if(a>b){cout<<"invalid input"<<endl;}
     else{
    for(int i=a;i<=b;i++){
        if(i==0||i==1){cout<<"invalid input"<<endl;
        break;}
        bool flag =0;
        for(int j=2;j<i;j++){
            if(i%j==0){
               flag =1;
        
            break;
            }

        } if(flag==0){cout<<i<<" is prime"<<endl;}
    }
     }
    return 0;
}