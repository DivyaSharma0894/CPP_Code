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
    tree(){root=NULL;}
    void insert(int val){
        Node* ans=new Node(val);
        Node* temp=root;
        if(root==NULL){
            root=ans;
            return;
        }
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            temp=q.front();q.pop();
            if(!temp->left){temp->left=ans;return;}
            else{q.push(temp->left);}
            if(!temp->right){temp->right=ans;return;}
            else{q.push(temp->right);}
        }

    }
    Node* getroot(){
        return root;
    }
    void print(){
        Node* temp;
        if(root==NULL){
            cout<<"empty"<<endl;
            return;
        }
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            temp=q.front();q.pop();
            cout<<temp->data<<" ";
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
        }
        cout<<endl;
    }
    int sizeRecursion(Node* ans){
        if(ans==NULL){return 0;}
        return sizeRecursion(ans->left)+1+sizeRecursion(ans->right);
    }
    int sizeLOT(){
        Node* temp=root;
        if(root==NULL){
            return 0;
        }
        queue<Node*>q;
        int size=0;
        q.push(root);
        while(!q.empty()){
            temp=q.front();q.pop();
            size++;
            if(temp->left){q.push(temp->left);}
            if(temp->right){q.push(temp->right);}
        }
        return size;
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
    cout<<T.sizeLOT()<<endl;
    cout<<T.sizeRecursion(T.getroot());
}