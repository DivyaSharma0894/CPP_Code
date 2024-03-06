#include<iostream>
using namespace std;
int Pythogorus(int base,int height,int hypotanous){
if(hypotanous*hypotanous==base*base + height*height){
    cout<<"Pythagorus Triplet"<<endl;

}
else{cout<<"not a Pythagorus Triplet"<<endl;}

}
int main(){
int p,q,r;
cout<<"enter base height and hypotenous"<<endl;
cin>>p>>q>>r;
Pythogorus(p,q,r);
return 0;

}