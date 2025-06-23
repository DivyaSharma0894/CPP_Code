#include<iostream>
using namespace std;
class Node{public:
    int data;
    Node* prev;
    Node* next;
    Node(int val){
        data=val;
        prev=NULL;
        next=NULL;
    }
};
class Doublylinkedlist{
    Node* head;
   public:
    Doublylinkedlist(){
        head=NULL;
    }
    void insert(int x){
        Node* ans=new Node(x);
        Node* temp=head;
        if(head==NULL){
            head=ans;
            
        }
        else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=ans;
        ans->prev=temp;}
    }
    void print(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void reverse(){
        Node* temp=head;
        Node* temp1;
        while(temp!=NULL){
             temp1=temp->prev;
            temp->prev=temp->next;
            temp->next=temp1;
            temp=temp->prev;
        }
        if(temp1!=NULL){
            head=temp1->prev;}
    }
};
int main(){
    Doublylinkedlist list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);
    list.print();
    list.reverse();
    list.print();

}