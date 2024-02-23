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

void flattenABinaryTree(Node* root){
    if(root==NULL || (root->left==NULL && root->right)){
        return ;

    }

   
    if(root->left!=NULL){
        flattenABinaryTree(root->left);
        Node* temp=root->right;
        root->right=root->left;
        root->left=NULL;
        Node* curr=root->right;
        while(curr->right!=NULL){
            curr=curr->right;

        }

        curr->right=temp;

    }

    flattenABinaryTree(root->right);

}


void inorder(Node* root){
    if(root==NULL){
        return;
    }
    
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

int main(){

    Node* root=new Node(4);
    root->left=new Node(9);
    root->left->right=new Node(3);
    root->left->left=new Node(1);
   
    root->right=new Node(5);
    root->right->right=new Node(6);
    inorder(root);
    cout<<endl;
    flattenABinaryTree(root);
    inorder(root);
    

    
}
