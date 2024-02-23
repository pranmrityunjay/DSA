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

int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int left_height=height(root->left);
    int right_height=height(root->right);
    return max(left_height,right_height)+1;
}

int diameter(Node* root){
    if(root==NULL){
        return 0;

    }

    
}

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
   cout<<height(root)<<endl;
}