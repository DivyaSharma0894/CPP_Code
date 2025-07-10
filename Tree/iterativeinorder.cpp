#include<iostream>
#include<stack>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};
class tree{
    Node* root;
    public:
    tree(){
        root=NULL;
    }
    Node* getroot(){
        return root;
    }
    void insert(int val){
        Node* temp=root;
        Node* ans=new Node(val);
        if(root==NULL){
            root=ans;
            return;
        }
        stack<Node*>s;
        s.push(root);
        while(!s.empty()){
            temp=s.top();s.pop();
            if(!temp->left){temp->left=ans;return;}
            else{s.push(temp->left);}
             if(!temp->right){temp->right=ans;return;}
            else{s.push(temp->right);}
        }
    }
    void inorder(){
        Node* temp=root;
        if(root==NULL){
            cout<<"empty"<<endl;
            return;
        }
        stack<Node*>s;
       // s.push(root);
        while(temp!=NULL || !s.empty()){
            
            while(temp!=NULL){
                s.push(temp);
                temp=temp->left;
            }
            temp=s.top();s.pop();
            cout<<temp->data<<" ";
            temp=temp->right;
        }
    }
};
int main(){
     tree T;
 T.insert(10);  // root
    T.insert(20);  // left of 10
    T.insert(30);  // right of 10
    T.insert(40);  // left of 20
    T.insert(50);  // right of 20 (leaf)
    T.insert(60); 
    T.inorder();


}