#include<iostream>
#include<unordered_map>
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
        if(head==NULL){
            head=temp;
        }
        else{
            node* temp1=head;
            while(temp1->next!=NULL){
                temp1=temp1->next;
            }
            temp1->next=temp;
        }
    }
    void removeduplicatesMaps(){
        if(head==NULL) return;
        node* temp=head;
        node* temp1=head->next;
        unordered_map<int,bool> check;
        while(temp1!=NULL){
        if(check[temp1->data]){
            node* temp2=temp1;
            temp->next=temp1->next;
            temp1=temp1->next;
            delete temp2;
            
        }
        else{check[temp1->data]=true;
            temp=temp1;
            temp1=temp1->next;
            

        }
    }}
    void print(){
        node* temp=head;
        while( temp!=NULL){
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
    list.print();
    list.removeduplicatesMaps();
    list.print();
}