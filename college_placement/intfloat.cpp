#include<iostream>
using namespace std;
int main(){
float x;
cin>>x;
int a=x;
if(x-a==0){
    cout<<"int "<<a;
}
else{cout<<"float "<<a<<" "<<(x-a);
}
}