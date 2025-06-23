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
    void insert(int x){
        Node* ans=new Node(x);
        Node* temp=head;
        if(head==NULL){
            head=ans;

        }
        else{
            while(temp!=NULL){
                temp=temp->next;
            }
            temp->next=ans;
            ans->prev=temp;

        }
    }
    void print(){
        Node* temp;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void deletehead(){
        Node* temp=head;
        head=head->next;
        head->prev=NULL;
        delete temp;
    }
};
int main(){
    doublylinkedlist list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);
    list.print();
    list.deletehead();
    list.print();


}