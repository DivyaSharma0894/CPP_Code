/* Inverted half Pyramid when only n is given
eg:n=5;
* * * * *
* * * * 
* * * 
* * 
*
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;

    }
}