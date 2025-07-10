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
   Node* getroot(){
    return root;
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
            if(!temp->left){temp->left=ans; return;}
            else{q.push(temp->left);}
            if(!temp->right){temp->right=ans;return;}
            else{q.push(temp->right);}
        }
    }
    bool present(Node* ans,int key,vector<Node*>& path){
        if(ans==NULL){return false;}
        path.push_back(ans);
        if(ans->data==key){return true;}
        if(present(ans->left,key,path)|| present(ans->right,key,path)){
        return true;}
        path.pop_back();
        return false;

    }
    Node* LCA(Node* ans,int n1,int n2){
        vector<Node*>path1,path2;
        if(!present(ans,n1,path1)|| !present(ans,n2,path2)){
            return NULL;
        }
        int i;
        for( i=0;i<path1.size()&& i<path2.size();i++){
            if(path1[i]!=path2[i]){
                break;
            }
        }
        return path1[i-1];


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
 cout<< T.LCA(T.getroot(),40,50)->data;

}