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

    return max(height(root->left),height(root->right))+1;
}

bool balanced(Node* root){
    if(root==NULL){
        return true;
    }


    if(balanced(root->left)==false){
        return false;
    }

    if(balanced(root->right)==false){
        return false;
    }

    int Left=height(root->left);
    int Right=height(root->right);

    if(abs(Left-Right)<=1){
        return true;
    }
    else{
        return false;
    }

}




int main(){

    Node* root=new Node(5);
    root->left=new Node(6);
    // root->left->right=new Node(1);
    // root->left->left=new Node(9);
    // root->left->right->left=new Node(2);
    //  root->left->right->left->right=new Node(2);
   
    // root->right=new Node(3);
    // root->right->right=new Node(1);
    // root->right->left=new Node(2);
   
//    

    cout<<balanced(root)<<endl;

   



}