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
 void insert(int x){
    Node* temp=head;
    Node* ans=new Node(x);
    if(head==NULL){ 
        head=ans;
        ans->next=ans;
        

    }
    else{
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=ans;
        ans->next=head;
    }
 }
 void insertatend(int x){
    Node* ans=new Node(x);
    Node* temp=head;
    ans->next=head->next;
    head->next=ans;
    int Z;
    Z=head->data;
    head->data=ans->data;
    ans->data=Z;
    head=ans;

 }
 void print(){
    Node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    while(temp!=head);
    cout<<endl;
 }
 
};
int main(){ circularlinkedlist list;
 list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);
    list.print();
    list.insertatend(60);
    list.print();
     list.insertatend(70);
    list.print();

}