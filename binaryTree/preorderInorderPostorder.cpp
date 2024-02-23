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


    void preorder(Node* root){
        if(root==NULL){
            return;

        }

        cout<<root->val<<" ";
        preorder(root->left);
        preorder(root->right);
    }


    void inorder(Node* root){
        if(root==NULL){
            return;

        }

        inorder(root->left);
        cout<<root->val<<" ";
        inorder(root->right);
    }


    void postorder(Node* root){
        if(root==NULL){
            return;
        }

        postorder(root->left);
        postorder(root->right);
        cout<<root->val<<" ";

    }
int main(){

    Node* root=new Node(21);
    root->left=new Node(26);
    root->right=new Node(12);
    root->left->left=new Node(34);
    root->left->right=new Node(23);
    root->right->left=new Node(56);
    root->right->right=new Node(78);
    preorder(root);
    inorder(root);
    postorder(root);


}