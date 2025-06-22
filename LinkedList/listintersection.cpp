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
class linkedlist{public:
    node* head;
    
    linkedlist(){
        head=NULL;
    }
    void insertatend(int val){
        node* temp=new node(val);
        if(head==NULL){
            head=temp;
        }
        else{node* temp1=head;
            while(temp1->next!=NULL){
                temp1=temp1->next;
            }
            temp1->next=temp;
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
};
 node* intersection(node* head1,node* head2){
        node*p1=head1;
        node* p2=head2;

        while(p1!=p2){
           p1= (p1==NULL)?p1=head2:p1->next;
           p2= (p2==NULL)?p2=head1:p2->next;

        }
        return p1;
     }
int main(){
 linkedlist list;
    list.insertatend(10);
    list.insertatend(20);
    list.insertatend(30);

    // Shared part
    node* shared = new node(40);
    shared->next = new node(50);
    shared->next->next = new node(60);

    // Add shared to end of list
    node* temp = list.head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = shared;

    linkedlist list1;
    list1.insertatend(100);
    list1.insertatend(200);

    // Add same shared part to list1
    node* temp2 = list1.head;
    while (temp2->next != NULL)
        temp2 = temp2->next;
    temp2->next = shared;

    // Print both lists
    cout << "List A: ";
    list.print();
    cout << "List B: ";
    list1.print();

    // Call intersection function
    node* inter = intersection(list.head, list1.head);

    if (inter)
        cout << "Intersection at node with value: " << inter->data << endl;
    else
        cout << "No intersection found 💔" << endl;
}