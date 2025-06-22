#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
node* insertion(node* head,int key){
    node* node1=new node;
    node1->data=key;
    node1->next=head;
    return node1;

}
void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;

    }
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
print(head);
cout<<endl;
head=insertion(head,5);
print(head);
}