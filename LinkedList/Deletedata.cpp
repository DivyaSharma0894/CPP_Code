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
    linkedlist(node*Rhead){
        head=Rhead;
    }
    void deletedata(int val){
        if(head==NULL){
            cout<<"list is empty";
            return;
        }
        if(head->data==val){
            node* to_delete=head;
            head=head->next;
            delete to_delete;
            return ;
        }
        node* temp=head;
        node* prev=NULL;
        while(temp!=NULL && temp->data!=val){
             prev=temp;
            temp=temp->next;
        }
        if(temp==NULL){
            cout<<"value not found in linked list"<<endl;
            return ;
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
    third->next=NULL;
    linkedlist list(head);
    list.printlist();
    list.deletedata(20);
    list.printlist();

}