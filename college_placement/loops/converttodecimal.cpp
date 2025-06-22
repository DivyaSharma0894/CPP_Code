#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n;
    int count=0;
    int ans=0;
    while(n>0){cin>>m;
        count=0;
        while(m>0){ans=0;
            ans=m%2;
            if(ans==1){
                count++;
            }
            m=m/2;
        }int sum=0;
        for(int i=0;i<count;i++){
            
            sum=sum+pow(2,i);
        }
        cout<<sum<<endl;
        n--;
    }
}