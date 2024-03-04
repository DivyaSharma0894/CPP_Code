/*Neha mom allow her to go outside only on odd days . 
Also she can't hangout if her pocketmoney washed away.her pocket money will reduce by 300 every time she went out.
*/
#include<iostream>
using namespace std;
int main(){int pocketmoney=3000;
    for(int i=0;i<=30;i++){
        if(i%2==0){continue;
     }
     if(pocketmoney==0){
        break;
     }
     cout<<"go out on day"<<i<<endl;
     pocketmoney-=300;

    }
}