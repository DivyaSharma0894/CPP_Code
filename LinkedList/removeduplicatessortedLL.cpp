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
    linkedlist(){
        head=NULL;
    }
    void insertatend(int val){
        node* temp=new node(val);
        node* temp1=head;
        if(head==NULL){
            head=temp;
        }
        else{
            while(temp1->next!=NULL){
                temp1=temp1->next;
            }
            temp1->next=temp;
        }
    }
    void print(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void removeduplicate(){
       node* temp=head;
       while(temp!=NULL && temp->next!=NULL){
        if(temp->data==temp->next->data){
            node* ans=temp->next;
            temp->next=temp->next->next;
            delete ans;

        }
        else{
            temp=temp->next;
        }
       }
    }
};
int main(){
    linkedlist list;
    list.insertatend(10);
    list.insertatend(20);
    list.insertatend(30);
    list.insertatend(40);
    list.insertatend(40);
    list.insertatend(50);
    list.insertatend(50);
     list.insertatend(50);
    list.insertatend(50);
    list.insertatend(60);
    list.print();
    list.removeduplicate();
    list.print();

}