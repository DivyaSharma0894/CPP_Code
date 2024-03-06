/* print
_ _ _ _ * * * * *
_ _ _ * * * * *
_ _ * * * * *
_ * * * * *
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=1;j<=n+i-1;j++){
            if(j<i){ cout<<"  ";}
            else{cout<<"* ";}


        }
        cout<<endl;
    }
}