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
class linkedlist{public:
    node* head;
    
    linkedlist(){
        head=NULL;
    }
    void insertatend(int val){
        node* temp=new node(val);
        if(head==NULL){
            head=temp;
        }
        else{node* temp1=head;
            while(temp1->next!=NULL){
                temp1=temp1->next;
            }
            temp1->next=temp;
        }
    }
   bool cycle(){

    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        if(slow==fast){
         return true;
        }
        slow=slow->next;
        fast=fast->next->next;
    }
    return false;

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
    list.insertatend(40);
    list.insertatend(50);
    list.insertatend(50);
     list.insertatend(50);
    list.insertatend(50);
    list.insertatend(60);
    list.head->next->next->next->next = list.head->next;
   

    list.cycle()?cout<<"true":cout<<"false";
    //list.print();

}