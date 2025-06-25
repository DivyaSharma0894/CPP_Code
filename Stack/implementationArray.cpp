#include<iostream>
using namespace std;
class stack{
    int* arr;
    int top;
    int capacity;
    public:
    stack(int val){
        capacity=val;
        arr=new int[capacity];
        top=-1;
    }
    void push(int x){
        if(top>capacity){
            return;
        }
        arr[++top]=x;

    }
    void pop(){
        if(top<0){
            return;
        }
        top--;
    }
    int peek(){
        if(top<0){
            return -1;
        }
        return arr[top];
    }
    bool isempty(){
        return top==-1;
    }
    void display(){
        if(isempty()){
            return;
        }
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }

};
int main(){
stack ans(30);
ans.push(10);
ans.push(20);
ans.push(30);
ans.push(40);
ans.pop();
ans.display();
cout<<ans.peek();
}
