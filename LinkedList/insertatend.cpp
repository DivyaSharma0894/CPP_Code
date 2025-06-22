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
   void insertionatend(int key){
    node* Newnode=new node(key);
    if(head==NULL){
        head=Newnode;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=Newnode;
    
   }
   void printlist(){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
   }
};
int main(){
    linkedlist list;
    
    list.insertionatend(10);
    list.insertionatend(20);
    list.insertionatend(30);
    list.insertionatend(40);
    list.printlist();
    return 0;

}