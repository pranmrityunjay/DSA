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

int  maxPathSumUtil(Node* root,int &ans){
    if(root==NULL){
        return;
    }

    int Left= maxPathSumUtil(root,ans);
    int Right= maxPathSumUtil(root,ans);

    int node_max=max(max(root->val,root->val+Left+Right),max(root->val+Left,root->val+Right));

    ans=max(ans,node_max);


    int SinglePathSum=max(root->val,max(root->val+Left,root->val+Right));
    return SinglePathSum;
}


int maxPathSum(Node* root){
    int ans=INT_MIN;
    maxPathSumUtil(root,ans);
    return ans;
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
    // preorder(root);
    // sumReplacement(root);
    // cout<<endl;
    // preorder(root);



  // findSumOfLevel(root,3);



}



