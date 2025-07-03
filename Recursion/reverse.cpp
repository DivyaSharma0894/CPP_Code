#include<iostream>
#include<string>
using namespace std;
string reverse(string ans,int i,int j){
    if(i>j){
        return ans;
    }
    swap(ans[i],ans[j]);
       return  reverse(ans,i+1,j-1);
 

}
int main(){
    string ans="abcde";
    cout<<reverse(ans,0,4);
}