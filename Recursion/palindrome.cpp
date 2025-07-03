//Given a string, the task is to write a recursive function to check if the given string is palindrome or not.
#include<iostream>
#include<string>
using namespace std;
bool check(string S ,int start,int end){
     if(start>=end){return true;}
    if(S[start]!=S[end]){
        return false;
    }
   
    return check(S,start+1,end-1);

}
int main(){
    string ans="abcqba";
    cout<<(check(ans,0,5)?"yes":"NO");
}