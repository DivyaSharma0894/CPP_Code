#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            if(j<i|| j>=5-i ){
                cout<<" ";
            }
            else{cout<<"*";}
        }
        cout<<endl;
    }
}