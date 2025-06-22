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
    void removehead(){
        node* temp=head;
        head=head->next;
        delete temp;
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
node* head=new node(10);
node* second= new node(20);
node* third=new node(30);
head->next=second;
second->next=third;
 linkedlist list(head);
 list.printlist();
 list.removehead();
 list.printlist();
  list.removehead();
 list.printlist();

}