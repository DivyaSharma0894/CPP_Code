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
class linkedlist{
node* head;
public:
linkedlist(node* Rhead){
    head=Rhead;
}

int length(){
    node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
int middlelement(){
    node* temp=head;
    int n=length()/2;
    int count=0;
    if(head->next==NULL){
        return head->data;
    }
   else {
    while(count!=n){
        temp=temp->next;
        count++;
    }
    return temp->data;
   } 
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
int main(){node* head=new node(10);
    node* second=new node(20);
    node* third=new node(30);
    node* third1=new node(40);
   // node* third2=new node(50);
    head->next=second;
    second->next=third;
    third->next=third1;
   // third1->next=third2;
    third1->next=NULL;
    linkedlist list(head);
    list.printlist();
    cout<<list.middlelement()<<endl;
    list.printlist();
     
}