/*print 
_ _ _ _ 1 _ _ _ _
_ _ _ 2 1 2 _ _ _
_ _ 3 2 1 2 3 _ _
_ 4 3 2 1 2 3 4 _
5 4 3 2 1 2 3 4 5
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    
    for(int i=n;i>0;i--){
        for(int j=1;j<=n;j++){
            if(j<i){
                cout<<"  ";
            }
            else{cout<<"* ";
            

            }

    }
    for(int j=1;j<n;j++){
        if(j>n-i){
            cout<<"  ";
        }
        else{cout<<"* ";}

    }
    
    cout<<endl;
    
    
    
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<i){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }}
            for(int j=1;j<n;j++){
                if(j<=n-i){
                    cout<<"* ";
                }
                else{cout<<"  ";}


    }
     cout<<endl;
      }
     
  

    
    return 0;

}