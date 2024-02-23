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

Node* createBst(Node* root,int  val){
    if(root==NULL){
        return new Node(val);
    }

    if(root->val>val){
        root->left=createBst(root->left,val);
    }

    else{
        root->right=createBst(root->right,val);
    }


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

    Node* root=NULL;
    root=createBst(root,8);
    createBst(root,6);
    createBst(root,10);
    createBst(root,5);
    createBst(root,7);
    createBst(root,9);
    createBst(root,12);
    createBst(root,11);
    createBst(root,13);
    inorder(root);

    cout<<root->right->right->left->val<<endl;

   
    

}