#include<iostream>
#include<queue>
using namespace std;
class Node{public:
int data;
Node* left;
Node* right;
Node(int val){
    data=val;
left=right=nullptr;
}
};
class BinaryTree{
    public:
    Node* root;
    BinaryTree(){
        root=nullptr;
    }
    void insert(int val){
        Node* temp=new Node(val);
        if(!root){
            root=temp;
            return;
        }
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            Node* TEMP=q.front();
            q.pop();
            if(!TEMP->left){
                TEMP->left=temp;
                return;
            }
            else{
                q.push(TEMP->left);
            }
            if(!TEMP->right){
                TEMP->right=temp;
                return;
            }
            else{
                q.push(TEMP->right);
            }
        }
    }

void inorder(Node* node){
    if(!node) return;
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}
void print(){
    inorder(root);
    cout<<endl;
}
};
int main(){

    BinaryTree tree;
    tree.root=new Node(10);
    tree.root->left=new Node(11);
    tree.root->right=new Node(9);
    tree.root->left->left=new Node(7);
    tree.root->right->left=new Node(15);
    tree.root->right->right=new Node(8);
    
    cout << "Inorder before insertion: ";
    tree.print();
    
    tree.insert(100);
    cout << "Inorder after insertion: ";
    tree.print();


}