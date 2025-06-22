#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};
void printdata(node* node){
    while(node!=NULL){
        cout<<node->data<<" ";
        node=node->next;

    }
}
int main(){
struct node* head=NULL;
struct node* second=NULL;
struct node* third=NULL;
head=new node;
second=new node;
third=new node;
head->data=1;
head->next=second;
second->data=2;
second->next=third;
third->data=3;
third->next=NULL;
printdata(head);
}