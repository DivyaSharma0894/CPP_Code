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
        Node* temp=root;
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
            else{q.push(temp->left);}
            if(!temp->right){
                temp->right=ans;
                return ;
            }
            else{q.push(temp->right);}
            

        }
    }
    void print(){
        Node* temp=root;
        if(root==NULL){
            cout<<"empty"<<endl;
        }
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            temp=q.front();q.pop();
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        cout<<endl;
    }
    void deletenode(int val){
        Node* temp=root;
        if(root==NULL){
            cout<<"enmpty"<<endl;
            return;
        }
        if(root->left==NULL && root->right==NULL && root->data==val){
            delete root;
            root=NULL;
            return;

        }
        Node* keynode=NULL;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            temp=q.front();q.pop();
            if(temp->data==val){
                keynode=temp;
            }
            if(temp->left){q.push(temp->left);}
            if(temp->right){q.push(temp->right);}


        }
        if(keynode){
            keynode->data=temp->data;
            deletedeepestnode(temp);
        }


    }
   void  deletedeepestnode(Node* ans){
        Node* temp=root;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            temp=q.front();q.pop();
            if(temp->left==ans){
                 delete temp->left;
                temp->left=NULL;
               
                return;
            }
            if(temp->right==ans){
                delete temp->right;
                temp->right=NULL;
                
                return;
            }
            
            if(temp->left){q.push(temp->left);}
            if(temp->right){q.push(temp->right);}
        }
    }

};
int main(){
    
    tree T;

    // Step 1: Inserting nodes to form a proper binary tree
    T.insert(10);  // root
    T.insert(20);  // left of 10
    T.insert(30);  // right of 10
    T.insert(40);  // left of 20
    T.insert(50);  // right of 20 (leaf)
    T.insert(60);  // left of 30

    cout << "Original Tree (Level Order): ";
    T.print();  // Output: 10 20 30 40 50 60

    // Step 2: Deleting Root Node (10)
    cout << "\nDeleting Root Node (10)...\n";
    T.deletenode(10);
    cout << "After deleting root: ";
    T.print();  // Expected: 60 20 30 40 50 (60 replaced 10)

    // Step 3: Deleting Middle/Internal Node (20)
    cout << "\nDeleting Middle Node (20)...\n";
    T.deletenode(20);
    cout << "After deleting internal node: ";
    T.print();  // Expected output changes based on deepest node swap

    // Step 4: Deleting Leaf Node (50)
    cout << "\nDeleting Leaf Node (50)...\n";
    T.deletenode(50);
    cout << "After deleting leaf node: ";
    T.print();  // 50 should be gone

    return 0;
}


