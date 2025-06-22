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
    linkedlist(node * Rhead){
        head=Rhead;
    }
    void deleteatpointer(node* pointer){
        if(pointer==head){
            node* temp=head;
            head=head->next;
            delete temp;
            return;
        }
        node* temp=head;
        node* prev=NULL;
        while(temp!=NULL && temp!=pointer){
            prev=temp;
            temp=temp->next;
        }
        if(temp==NULL){
            cout<<" enter correct pointer"<<endl;
            return;
        }
        prev->next=temp->next;
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
    node* second=new node(20);
    node* third=new node(30);
    head->next=second;
    second->next=third;
    linkedlist list(head);
    list.printlist();
    list.deleteatpointer(head);
    list.printlist();

}