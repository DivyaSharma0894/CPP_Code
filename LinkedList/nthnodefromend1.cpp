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
    linkedlist(){
        head=NULL;
    }
    void insertatend(int val){
        node* temp1=head;
        node* temp=new node(val);
        if(head==NULL){
            head=temp;
             head;
        }
        else{
        while(temp1->next!=NULL){
            temp1=temp1->next;
        }
        temp1->next=temp;
    }
}
    void nthnode(int n){
        int count=0;
        node* temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        
        temp=head;
        if(n>count){
            cout<<"inavlid length";
            return;
        }
           n=count-n;
        int var=0;
        while(var!=n){
            temp=temp->next;
            var++;
        }
        cout<<temp->data;

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
    list.nthnode(1);

}