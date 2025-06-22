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
class circularlinkedlist{
    Node* head;
    public:
    circularlinkedlist(){
        head=NULL;
    }
    void insertionatend(int x){
        Node* ans=new Node(x);
        if(head==NULL){
            ans->next=ans;
            head=ans;
        }
        else{
            Node* temp=head;
            while(temp->next!=head){
                temp=temp->next;
            }
            temp->next=ans;
            ans->next=head;

        }
    }
    void traverse(){
        Node* temp=head;
        do{
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        while(temp->next!=head);
        cout<<endl;
    }
};
int main(){
circularlinkedlist list;
list.insertionatend(10);
list.insertionatend(20);
list.insertionatend(30);
list.insertionatend(40);
list.traverse();
}