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

bool checkValid(Node* root,Node* min,Node* max){
    if(root==NULL){
        return true;
    }

    if(min!=NULL && root->val<=min->val){
        return false;
    }

    if(max!=NULL && root->val>=max->val){
        return false;
    }

    bool Left=checkValid(root->left,min,root);
    bool Right=checkValid(root->right,root,max);


    return Left && Right;
}



int main(){

   Node* root=new Node(8);
   root->left=new Node(7);
   root->left->left=new Node(5);
   root->right=new Node(10);
   root->right->left=new Node(9);
   bool ans=checkValid(root,NULL,NULL);

   if(ans){
    cout<<"yes"<<endl;
   }
   else{
    cout<<"false"<<endl;
   }

}