#include<iostream>
using namespace std;
int main(){
    int age;
    cin>>age;
    int year=age/365;
    int month=(age%365)/30;
    int days=(age%365)%30;
    cout<<year<<" years "<<endl;
    cout<<month<<" months "<<endl;
    cout<<days<<" days "<<endl;
}