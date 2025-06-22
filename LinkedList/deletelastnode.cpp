#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
class linkedlist{
    node* head;
    public:
    linkedlist(node* Rhead){
        head=Rhead;
    }
    void deletelastnode(){
        node* temp=head;
        node* prev=NULL;
        while(temp->next!=NULL){
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        delete temp;
    }
    void printlist(){
        node* temp =head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    node* head=new node(10);
    node* second=new node(20);
    node* third=new node(30);
    head->next=second;
    second->next=third;
    third->next=NULL;
    linkedlist list(head);
    list.printlist();
    list.deletelastnode();
    list.printlist();

}