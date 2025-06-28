#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }

};
class queue{
    public:
    Node* front=NULL;
    Node* rear=NULL;
    void enqueue(int val){
        Node* ans=new Node(val);
        if(rear==NULL){
            front=rear=ans;
        }
        else{
            rear->next=ans;
            rear=ans;
        }
        cout<<"enqueued"<<ans->data<<endl;
    }
    void dequeue(){
        Node* temp=front;
        if(front==NULL){
            cout<<"empty"<<endl;
        }
        else{
            
            front=front->next;
           
            if(front==NULL){
                rear=NULL;
            }
        }
        cout<<"dequeued"<<temp->data<<endl;
         delete temp;
    }
};
int main(){
    queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.dequeue();
}