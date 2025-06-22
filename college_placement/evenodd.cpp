#include<iostream>
#include<string>
using namespace std;
int main(){
    int num;
    cin>>num;
    
    int rev_num = 0; 
    while (num > 0) { 
        rev_num = rev_num * 10 + num % 10; 
        num = num / 10; 
    } 
    int ans=rev_num%10;
    if(ans%2==0){
        cout<<"EVEN";
    }
    else{
        cout<<"ODD";
    }



}