#include<iostream>
using namespace std;
class node {
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
        if(temp1==NULL){
            head=temp;
        }
        else{
            while(temp1->next!=NULL){
                temp1=temp1->next;
            }
            temp1->next=temp;
        }
    }
    int middleelement(){
        if(head==NULL){
            return -1;
        }
        node* slow=head;
        node* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow->data;
    }
    void print(){
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
    list.insertatend(10);
    list.insertatend(20);
    list.insertatend(30);
    list.insertatend(40);
    list.insertatend(50);
   // list.insertatend(60);
    list.print();
    cout<<"Middle element "<<list.middleelement()<<endl;

}