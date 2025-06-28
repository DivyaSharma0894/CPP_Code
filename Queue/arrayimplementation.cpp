#include<iostream>
using namespace std;
class queue{
    public:
    int *arr;
    int capacity;
    int front;
    int rear;
    queue(int val){
        capacity=val;
        arr=new int[capacity];
        front=0;
        rear=-1;
    }
    void enqueue(int x){
        if(rear==capacity-1){
            cout<<"overflow"<<endl;
        }
        else{
            arr[++rear]=x;
        }
    }
    void dequeue(){
        if(rear==-1){
            cout<<"empty"<<endl;

        }
        else{
            front++;
        }

    }
    void display(){
        if(front>rear){
            cout<<"empty"<<endl;

        }
        else{
            for(int i=rear;i<=rear;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
 queue Q(20);
 Q.enqueue(10);
 Q.enqueue(20);
 //Q.dequeue();
 cout<<Q.rear<<" ";
 cout<<Q.front<<" "<<endl;
 Q.display();
}