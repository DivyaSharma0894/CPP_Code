#include<iostream>
using namspace std;
class queue{
    public:
    int *arr;
    int capacity;
    int front;
    int rear;
    queue(int val){
        capacity=val;
        arr=new int[capacity];
        front=-1;
        rear=-1;
    }
    void enqueue(int x){
        if(rear==capacity-1){
            cout<<"overflow"<<endl;
        }
        else{
            arr[++front]=x;
        }
    }
}
int main(){

}