/*print 

* _ _ _ _ _ _ *
* * _ _ _ _ * *
* * * _ _ * * *
* * * * * * * *
* * * * * * * *
* * * _ _ * * *
* * _ _ _ _ * *
* _ _ _ _ _ _ *

here _ denotes space
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n;j++){
            if(j<=i||j>=(2*n+1-i)){
                cout<<"* ";
            }
            else{cout<<"  ";}
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=2*n;j++){
            if(j<=i||j>=(2*n+1-i)){
                cout<<"* ";
            }
            else{cout<<"  ";}
        }
        cout<<endl;
    }
    return 0;
}