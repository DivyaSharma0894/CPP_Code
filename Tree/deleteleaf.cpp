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
    public:
    tree(){
        root=NULL;
    }
    void insert(int val){
        Node* ans=new Node(val);
        if(root==NULL){
            root=ans;
            return;
        }
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            Node* temp=q.front();
            q.pop();
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
    void deleteleaf(int val){
        if(root==NULL){
            cout<<"empty"<<endl;
            return;
        }
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            Node* temp=q.front();
            q.pop();
            if(temp->left!=NULL){
                if(temp->left->data==val && temp->left->left==NULL && temp->left->right==NULL){
                    delete temp->left;
                    temp->left=NULL;
                }
                else{
                    q.push(temp->left);
                }}
                if(temp->right!=NULL){
                if(temp->right->data==val && temp->right->left==NULL && temp->right->right==NULL){
                    delete temp->right;
                    temp->right=NULL;
                }
                else{
                    q.push(temp->right);
                    }
                }
            }
        }
    
    void print(){
        if(root==NULL){
            cout<<"empty"<<endl;
        }
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            Node* temp=q.front();
            q.pop();
            cout<<temp->data<<" ";
            if(temp->left!=NULL){ q.push(temp->left);}
            if(temp->right!=NULL){q.push(temp->right);}
        }
        cout<<endl;


    }
};
int main(){
tree T;
T.insert(10);
T.insert(20);
T.insert(30);
T.deleteleaf(20);
T.print();
}