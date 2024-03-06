#include<iostream>
#include<math.h>
using namespace std;
bool Armstrong(int n){int sum=0;
int no =n;

while(no>0){
    int LD=no%10;
    sum=sum + pow(LD,3);
    no=no/10;

}
if (sum == n){
    return 1;
}
else {
    return 0;
}

}

int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;

    bool ans = Armstrong(n);

    if (ans){
        cout << "armstrong no. " << endl;
    }

    else {
        cout <<"not armstrong" << endl;
    }

    return 0;
}