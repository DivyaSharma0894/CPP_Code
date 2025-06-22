#include<iostream>
using namespace std;
class Node{
    public: int data;
    Node* next;
        Node(int val){
            data=val;
            next=NULL;
        }
    
};
class CircularLinkedlist{
    Node* head;
    public:
    CircularLinkedlist(){
        head=NULL;
    }
    void insert(int x){
        Node* ans=new Node(x);
        Node* temp=head;
        if(head==NULL){
            head=ans;
            ans->next=ans;
            
        }
        else{
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=ans;
        ans->next=head; }
   
}
    void print(){
        Node* temp=head;
        do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    while(temp!=head);
    }
};
int main(){
    CircularLinkedlist list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);
    list.print();

}