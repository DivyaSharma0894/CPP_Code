#include<iostream>
using namespace std;
struct node{
 int data;
 node* next;
};
void traverse(node* node){
 if(node==NULL){
    return;
 }
 cout<<node->data<<" ";
 traverse(node->next);
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
traverse(head);

}