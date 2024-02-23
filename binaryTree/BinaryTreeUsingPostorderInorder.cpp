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

int search(int* inorder,int start,int end,int curr){
    for(int i=0;i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}

int idx=4;
Node* buildTree(int* postorder,int* inorder,int start,int end){
    if(start>end){
        return NULL;
    }

    int curr=postorder[idx];
    idx--;
    Node* node=new Node(curr);
    if(start==end){
        return node;
    }

    int pos=search(inorder,start,end,curr);
   
    node->right=buildTree(postorder,inorder,pos+1,end);
     node->left=buildTree(postorder,inorder,start,pos-1);
     






}

void Pinorder(Node* root){
    if(root==NULL){
        return;

    }

    Pinorder(root->left);
    cout<<root->val<<" ";
    Pinorder(root->right);
}


int main(){
    int postorder[]={4,2,5,3,1};
    int inorder[]={4,2,1,5,3};
    Node* root=buildTree(postorder,inorder,0,4);
    Pinorder(root);
}