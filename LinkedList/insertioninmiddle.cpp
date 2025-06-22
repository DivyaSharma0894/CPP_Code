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

void insertioninmiddle(node* prevnode ,int key){
   
    node* newnode=new node(key);
     if(prevnode==NULL){
        head=newnode;
        return;
    }
    newnode->next=prevnode->next;
    prevnode->next=newnode;
}
void printlist(){
    node* temp=head;
    
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
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
    list.insertioninmiddle(second,40);
    list.printlist();

}