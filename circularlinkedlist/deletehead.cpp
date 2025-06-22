#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class circularlinkedlist{
    Node* head;
    public:
    circularlinkedlist(){
        head=NULL;
    }
    void insert(int x){
        Node* temp=head;
        Node* ans=new Node(x);
        if(head==NULL){
            ans->next=ans;
            head=ans;
        }
        else{
            
            while(temp->next!=head){
                temp=temp->next;
            }
            temp->next=ans;
            ans->next=head;

        }

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
    void deletehead(){
        Node* temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        
       Node*  temp2=head;
        head=head->next;
        temp->next=head;

        delete temp2;
    }
};
int main(){
    circularlinkedlist list;
 list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);
    list.print();
   list.deletehead();
    list.print();

}