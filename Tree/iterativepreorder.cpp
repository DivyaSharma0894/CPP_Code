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
    void preorder(){
        Node* temp=root;
        if(root==NULL){
            cout<<"empty";
            return;
        }
        stack<Node*>S;
        S.push(root);
        while(!S.empty()){
            temp=S.top();S.pop();
            cout<<temp->data<<" ";
           
            if(temp->right)S.push(temp->right);
             if(temp->left)S.push(temp->left);
        }
        cout<<endl;
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
    T.preorder();

}