#include<iostream>
using namespace std;
class node{
    public:int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=right=nullptr;
    }
};
class traversal{
    public:
    void inorder(node* root){
        if(!root){
            return ;
        }
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
    void preorder(node* root){
        if(!root) return;
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);

    }
    void postorder(node* root){
        if(!root) return;
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
};
int main(){
    node *root=new node(10);
    root->left=new node(5);
    root->right=new node(15);
    root->left->left=new node(3);
    root->left->right=new node(7);
    traversal t;
    cout << "Inorder traversal: ";
    t.inorder(root);
    cout << endl;
    cout << "preorder traversal: ";
    t.preorder(root);
    cout << endl;
    cout << "postorder traversal: ";
    t.postorder(root);
    cout << endl;
}