#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int val){
        data=val;
        prev=NULL;
        next=NULL;
    }
};
class Circulardoublyll{
    Node* head;
    public:
    Circulardoublyll(){
        head=NULL;
    }
    void inseratstart(int x){
        Node* temp=head;
        Node* ans=new Node(x);
        if(head==NULL){
           
            ans->next=ans;
            ans->prev=ans;
             head=ans;
        }
        
        else{Node* temp=head->prev;
        ans->prev=head->prev;
        ans->next=head;
        head->prev->next=ans;
        head->prev=ans;
        head=ans;}
    }
    void insertatend(int x){
        Node* temp=head;
        Node* ans=new Node(x);
        if(head==NULL){
            ans->next=ans;
            ans->prev=ans;
            head=ans;
        }
        else{ans->prev=head->prev;
            ans->next=head;
            head->prev->next=ans;
            head->prev=ans;
        }
    }
    void insertbetweennodes(int x,int y){
        Node* temp=head;
        Node* ans=new Node(x);
        do{
            if(temp->data==y){
                ans->next=temp->next;
                ans->prev=temp;
                temp->next->prev=ans;
                temp->next=ans;
            }
            
            temp=temp->next;
        }
        while(temp!=head);

    }  
      void print(){
        Node* temp=head;
        do{
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        while(temp!=head);
        cout<<endl;
    }

};
int main(){
    Circulardoublyll list;
    list.inseratstart(10);
    list.inseratstart(20);
    list.inseratstart(30);
    list.inseratstart(40);
    list.insertatend(50);
    list.insertbetweennodes(60,30);
    list.print();


}