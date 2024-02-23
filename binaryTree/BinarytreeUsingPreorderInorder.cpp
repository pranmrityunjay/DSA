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
    for(int i=start;i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }
    }

    return -1;
}

Node* buildTree(int* preorder,int* inorder,int start,int end){
    if(start>end){
        return NULL;
    }

    static int i=0;

    int curr=preorder[i];
    i++;
    Node* root=new Node(curr);
    if(start==end){
        return root;
    }

    int pos=search(inorder,start,end,curr);

    root->left=buildTree(preorder,inorder,start,pos-1);
    root->right=buildTree(preorder,inorder,pos+1,end);




}

void inorderq(Node* root){
    if(root==NULL){
        return ;
    }

    inorderq(root->left);
    cout<<root->val<<" ";
    inorderq(root->right);
}




int main(){
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};

    Node* root=buildTree(preorder,inorder,0,4);
    inorderq(root);



   





}