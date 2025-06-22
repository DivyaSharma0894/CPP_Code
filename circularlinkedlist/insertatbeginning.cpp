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
    void insert(int val){
        Node* ans=new Node(val);
        Node* temp=head;
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
    void insertathead(int x){
        Node* ans= new Node(x);
        ans->next=head->next;
        head->next=ans;
        int temp=ans->data;
        ans->data=head->data;
        head->data=temp;
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
circularlinkedlist list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);
    list.print();
    list.insertathead(60);
    list.print();
     list.insertathead(70);
    list.print();

}