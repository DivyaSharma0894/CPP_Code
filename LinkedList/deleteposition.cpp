#include<iostream>
using namespace std;
class node{
    public:int data;
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
    void deleteatposition(int pos){
        if(pos==0){
            node* temp=head;
            head=head->next;
            delete temp;
            return;
        }
        node* Temp=head;
        node* prev=NULL;
        int count=0;
        while(Temp!=NULL && count<pos){
            prev=Temp;
            Temp=Temp->next;
            count++;
        }
        if(Temp==NULL){
            cout<<"enter valid position";
            return;
        }
        prev->next=Temp->next;
        delete Temp;
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
    list.deleteatposition(0);
    list.printlist();

}