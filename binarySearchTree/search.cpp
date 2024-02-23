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


Node* create(Node* root,int data){
    if(root==NULL){
        return new Node(data);
    }

    if(root->val>data){

    root->left=create(root->left,data);
}    
else {
    root->right=create(root->right,data);
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

Node* search(Node* root,int data){
    if(root==NULL){
        return NULL;
    }

    if(root->val==data){
        return root;
    }

    if(root->val>data){
        search(root->left,data);
    }

    if(root->val<data){
        search(root->right,data);
    }
    
}
int main(){

    Node* root=NULL;
    root=create(root,8);
    create(root,6);
    create(root,7);
    create(root,5);
    create(root,10);
    create(root,9);
    create(root,12);
    create(root,11);
    create(root,13);

    inorder(root);

    if(search(root,11)==NULL){
        cout<<"Does not exist"<<endl;
    }

    else{
        cout<<"exist"<<endl;
    }
  
    


}