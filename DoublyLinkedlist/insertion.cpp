#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int val){
        data=val;
        prev=NULL;
        next=NULL;
    }
};
class doublylinkedlist{
    Node* head;
    public:
    doublylinkedlist(){
        head=NULL;
    }
    void insertatfront(int x){
        Node* ans=new Node(x);
        if(head==NULL){
            head=ans;
        }
        else{
            ans->next=head;
            head->prev=ans;
            head=ans;
        }
    }
    void insertafter(Node* given,int x){
        Node* ans=new Node(x);
        ans->next=given->next;
        given->next=ans;
        ans->prev=given;
        ans->next->prev=ans;
    }
    void InsertAfter(){
        insertafter(head->next,70);
    }

    void insertatend(int x){
        Node* temp=head;
        Node* ans=new Node(x);
        while(temp->next!=NULL){
            temp=temp->next;
        }
        ans->prev=temp;
        temp->next=ans;

    }
    void insertbefore(Node* given,int x){
        Node* ans=new Node(x);
        ans->next=given;
        ans->prev=given->prev;
        given->prev=ans;
        ans->prev->next=ans;

    }
    void InsertBefore(){
        insertbefore(head->next,120);
    }
    void print(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    doublylinkedlist list;
    list.insertatfront(10);
    list.insertatfront(20);
    list.insertatfront(30);
    list.insertatfront(40);
    list.print();
    list.InsertAfter();
    list.print();
    list.insertatend(100);
    list.print();
    list.InsertBefore();
    list.print();

}