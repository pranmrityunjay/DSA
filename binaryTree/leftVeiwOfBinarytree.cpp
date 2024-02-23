#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int data){
        this->val=data;
        left=NULL;
        right=NULL;
    }

};

void leftveiw(Node* root){

     if(root==NULL){
        return;
    }
    queue<Node*>q;
     q.push(root);


    while(!q.empty()){
    int size=q.size();
    for(int i=0;i<size;i++){
    
        Node* curr=q.front();
        q.pop();

        if(i==0){
        
        cout<<curr->val<<" ";
        }

        if(curr->left!=NULL){
            q.push(curr->left);
        }

         if(curr->right!=NULL){
            q.push(curr->right);
        }
    
}}}

int main(){

    Node* root=new Node(5);
    root->left=new Node(6);
    root->left->right=new Node(1);
    root->left->left=new Node(9);
    root->left->right->left=new Node(2);
    root->left->right->left->left=new Node(3);
    root->left->right->left->right=new Node(5);
    root->right=new Node(3);
    root->right->right=new Node(1);
    root->right->left=new Node(2);
    root->right->left->right=new Node(6);
    root->right->left->right->right=new Node(7);
    leftveiw(root);  
    
    cout<<endl;
   



  // findSumOfLevel(root,3);



}