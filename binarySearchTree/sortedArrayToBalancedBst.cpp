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
Node* arrayToBST(int* arr,int start,int end){
    if(start>end){
        return NULL;
    }

    int mid=start+(end-start)/2;
    Node* root=new Node(arr[mid]);

    root->left=arrayToBST(arr,start,mid-1);
    root->right=arrayToBST(arr,mid+1,end);
    
    return root;

}

void preorder(Node* root){
    if(root==NULL){
        return;
    }

    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    int arr[]={-10,-5,30,40,50,60};
    Node* root=arrayToBST(arr,0,5);
    preorder(root);

}