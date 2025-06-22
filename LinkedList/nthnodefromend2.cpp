#include<iostream>
using namespace std;
class node{
    public: int data;
    node* next;
    node( int val){
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
        node* temp1=new node(val);

        if(head==NULL){
            head=temp1;
        }
        else{node* temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=temp1;
        }
    }

        void print(){
            node* temp=head;
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp=temp->next;
            }
             cout<<endl;
        }

       int nthnodefromend(int val){
        node* slow=head;
        node* fast=head;
        int count=0;
        while(count<val){
            if(fast==NULL){
                return -1;
            }
            fast=fast->next;
            count++;
        }
        while(fast!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        return slow->data;
       }
    
};
int main(){
    linkedlist list;
    list.insertatend(10);
    list.insertatend(20);
    list.insertatend(30);
    list.insertatend(40);
    list.insertatend(50);
    list.insertatend(60);
    list.print();
    cout<<list.nthnodefromend(6)<<" ";

}