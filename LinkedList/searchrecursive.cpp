#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
bool search(node* node,int key){
    if(node==NULL){
        return false;
    }
    if(node->data==key){
        return true;
    }
    search(node->next,key);
}
int main(){
 node* head=NULL;
 node* second=NULL;
 node* third=NULL;
 head=new node;
 second=new node;
 third=new node;
 head->data=1;
 head->next=second;
 second->data=2;
 second->next=third;
 third->data=3;
 third->next=NULL;
search(head,4)?cout<<"Yes":cout<<"NO";
}