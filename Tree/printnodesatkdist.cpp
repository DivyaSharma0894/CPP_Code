#include<iostream>
#include<queue>
using namespace std;
class Node{public:
    int data;
    Node*left;
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
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
        }
        cout<<endl;

    }
    void NodeAtKDistanceRecursion(Node* ans,int k){
        if(ans==NULL||k<0){
            return;
        }
        if(k==0){
            cout<<ans->data<<" ";
            return;
        }
        NodeAtKDistanceRecursion(ans->left,k-1);
        NodeAtKDistanceRecursion(ans->right,k-1);


    }
    void NodeAtKDistanceLOT(int k){
        Node* temp=root;
        if(root==NULL){
            return;
        }
        int level=0;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            
            int size=q.size();
            if(level==k){
                for(int i=0;i<size;i++){
                    temp=q.front();q.pop();
                    cout<<temp->data<<" ";
                    
                }
            return;}
            for(int i=0;i<size;i++){
                temp=q.front();q.pop();
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);

            }
            level++;
            
            
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
    T.print();
    T.NodeAtKDistanceLOT(2);
    cout<<endl;
    T.NodeAtKDistanceRecursion(T.getroot(),1);


}