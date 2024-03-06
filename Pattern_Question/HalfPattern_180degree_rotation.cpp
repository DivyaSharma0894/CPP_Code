/*print Half Pattern after 180Degree rotation
eg:n=5
_ _ _ _ *
_ _ _ * *
_ _ * * *
_ * * * *
* * * * *
here _ show space 
     
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;
    for(int i=n;i>=1;i--){for(int j=1;j<=n;j++){
        if(j>=i){cout<<"* ";}
        else{cout<<"  ";}
    }
    cout<<endl;

    }
}