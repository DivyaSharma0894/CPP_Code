#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"enter number1 and number2"<<endl;
    cin>>n1>>n2;
    char op;
    cout<<"enter + for add, - for subtract, * for multiplication , and / for division "<<endl;
    cin>>op;
    switch(op){
        case '+':
        cout<<"sum is "<<n1+n2<<endl;
        break;
        case '-':
        cout<<"subtraction is "<<n1-n2<<endl;
        break;
        case '*':
        cout<<"multiplying is "<<n1*n2<<endl;
        break;
        case '/':if(n2==0){cout<<"invalid input"<<endl;}
        else{
        cout<<"division is "<<n1/n2<<endl;}
        break;
        default:
        cout<<"invalid input"<<endl;
        break;
    }
}