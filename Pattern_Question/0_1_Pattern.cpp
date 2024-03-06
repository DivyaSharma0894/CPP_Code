/*print
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    int count =0;
    for(int i=1;i<=n;i++){ 
        for(int j=1;j<=i;j++){
            if(i%2!=0&&j%2!=0){cout<<"1 ";}
            if(i%2!=0&&j%2==0){cout<<"0 ";}
            if(i%2==0&&j%2!=0){cout<<"1 ";}
            if(i%2==0&&j%2==0){cout<<"0 ";}

           
    }
    cout<<endl;
}
}