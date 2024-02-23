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

bool getPath(Node* root,int key,vector<int>&path){
    if(root==NULL){
        return false;
    }

    path.push_back(root->val);
    if(root->val==key){
        return true;
    }

    if(getPath(root->left,key,path)|| getPath(root->right,key,path)){
        return true;
    }

    path.pop_back();
    return false;
}

int LCA(Node* root,int n1,int n2){
    vector<int>path1,path2;

    if(!getPath(root,n1,path1) || !getPath(root,n2,path2)){
        return -1;
    }

    int meet;
    for(meet=0;meet<path1.size()&& path2.size();meet++){
        if(path1[meet]!=path2[meet]){
            break;
        }

    }

    return path1[meet-1];
}


Node* LCA2(Node* root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }

    if(root->val==n1 || root->val==n2){
        return root;
    }

    Node* Left=LCA2(root->left,n1,n2);
    Node* Right=LCA2(root->right,n1,n2); 

    if(Left&&Right){
        return root;
    }

    if(Left!=NULL){
        return Left;
    }

     if(Right!=NULL){
        return Right;
    }
}



int main(){

    Node* root=new Node(5);
    root->left=new Node(6);
    root->left->right=new Node(1);
    root->left->left=new Node(11);
    root->left->right->left=new Node(2);
    root->left->right->left->left=new Node(3);
    root->left->right->left->right=new Node(5);
    root->right=new Node(3);  
    root->right->right=new Node(1);
    root->right->left=new Node(2);
    root->right->left->right=new Node(6);
    root->right->left->right->right=new Node(7);
    Node* ans=LCA2(root,11,7);
    cout<<ans->val<<endl; 



}