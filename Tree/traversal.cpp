#include<iostream>
#include<queue>
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
    void preorder( Node* root){
        Node*temp=root;
        if(temp==NULL){
            return;
        }
        cout<<temp->data<<" ";
        preorder(temp->left);
        preorder(temp->right);
    }
    void inorder(Node* root){
        Node*temp=root;
        if(temp==NULL){
            return;
        }
        
        inorder(temp->left);
        cout<<temp->data<<" ";
        inorder(temp->right);
    }
    
     void postorder(Node* root){
        Node*temp=root;
        if(temp==NULL){
            return;
        }
        
        postorder(temp->left);
        postorder(temp->right);
        cout<<temp->data<<" ";
    }
    public:tree(){
        root=NULL;
    }
    
    void Preorder(){
        preorder(root);
        cout<<endl;
    }
     void Inorder(){
        inorder(root);
        cout<<endl;
    }
     void Postorder(){
        postorder(root);
        cout<<endl;
    }
    void insert(int val){
        Node* temp=root;
        Node* ans=new Node(val);
        if(root==NULL){
            root=ans;
            return;
        }
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            temp=q.front();q.pop();
            if(temp->left==NULL){
                temp->left=ans;
                return;
            }
            else{
                q.push(temp->left);
            }
            if(temp->right==NULL){
                temp->right=ans;
                return;
            }
            else{
                q.push(temp->right);
            }
        }
    }

    void print(){
        Node* temp=root;
        if(root==NULL){
            cout<<"empty"<<endl;
            return;
        }
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            temp=q.front();q.pop();
            cout<<temp->data<<" ";
            if(temp->left){q.push(temp->left);}
            if(temp->right){q.push(temp->right);}
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
T.print();
T.Preorder();
T.Inorder();
T.Postorder();
}