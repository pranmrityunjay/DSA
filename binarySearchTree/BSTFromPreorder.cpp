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

Node* constructBST(int* preorder,int* preorderIdx,int key,int min,int max,int n) {
    if(*preorderIdx>=n){
        return NULL;
    }

    Node* root=NULL;
  
    if(key>min && key<max){
        root=new Node(key);
          *preorderIdx=*preorderIdx+1;
                       
        if(*preorderIdx<n){
            root->left=constructBST(preorder,preorderIdx,preorder[*preorderIdx],min,key,n);

        }

        if(*preorderIdx<n){

            root->right=constructBST(preorder,preorderIdx,preorder[*preorderIdx],key,max,n);

        }

       
    }

     return root;
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
    int preorder[]={10,2,1,13,11};

    int n=5;
    int preorderIdx=0;
    Node* root=constructBST(preorder,&preorderIdx,preorder[0],INT_MIN,INT_MAX,n);
    inorder(root);


}