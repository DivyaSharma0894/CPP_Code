/*
 1 2 3 4 5 6 7 8 9 
asx1    *       *   
2  *   *   *   *  
3*       *       *
(1,3)(1,7)(2,2)(2,4)(2,6)(2,8)(3,1)(3,5)(3,9)

*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    for(int i=1; i<=3; i++){
        for(int j=1;j<=n;j++){
            if((i+j)%4==0||(i==2)&&(i+j)%2==0){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }

        }
        cout<<endl;
}
}