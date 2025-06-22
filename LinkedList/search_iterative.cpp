#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
void search(node* node,int key){
    int num=0;
while(node!=NULL ){
if(node->data==key){
    cout<<"key found";
    num=1;
    break;
}node=node->next;
}
if(num==0){
    cout<<"key not present";
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
    int key=4
    ;
    search(head,key);
}