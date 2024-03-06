#include<iostream>
using namespace std;
int main(){int n;
cout<<"enter no upto which you want to print "<<endl;
cin>>n;
cout<<"req numbers are"<<endl;
for(int i=1;i<n;i++){
    if(i%3!=0){
        cout<<i<<endl;
    }
}
return 0;
    
}