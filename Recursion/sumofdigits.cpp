//Sum of Digits using Recursion
#include<iostream>
using namespace std;
int sum(int num){int ans=0;
    if(num==0){
        return 0;
    }
    
    return (num%10)+sum(num/10);
    
}
int main(){
    cout<<sum(218);

}