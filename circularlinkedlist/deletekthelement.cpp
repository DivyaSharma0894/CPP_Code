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
        Node* ans=new Node(x);
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
    void deleteatk(int k){
        Node* temp=head;
        int count=1;
        Node* prev=NULL;
        while(temp->next!=head && count<=k){
            if(k==1){
                deletehead();
                return;
            }
            if(count==k){
               Node* temp2=temp;
               prev->next=temp->next;
               delete temp2; 
               return;
            }
            prev=temp;
            temp=temp->next;
            count++;
        }

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
   list.deleteatk(1);
    list.print();
}