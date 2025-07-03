//Given a set represented as a string, write a recursive code to print all the subsets of it. The subsets can be printed in any order.
#include<iostream>
#include<string>
using namespace std;
void powerset(string S,string curr="",int N=0){
    if(N==S.size()){
        cout<<curr<<endl;
        return;
    }
    powerset(S,curr+S[N],N+1);
    powerset(S,curr,N+1);

   
}
int main(){
    string S="ABC";
    powerset(S);
}