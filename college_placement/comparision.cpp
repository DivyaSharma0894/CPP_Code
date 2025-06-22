#include<iostream>
using namespace std;
int main(){
    int x,y;
    char s;
    cin>>x>>s>>y;
   if(s=='=' && x==y || s=='>' && x>y || s=='<' && x<y ){
    cout<<"Right";
   }
   else {
    cout<<"Wrong";
   }
    
    
}