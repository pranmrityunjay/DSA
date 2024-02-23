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

    
    else{
        root->right=create(root->right,data);
    }
}

Node* search(Node* root,int key){
    if(root==NULL){
        return NULL;
    }

    if(root->val==key){
        return root;
    }

    if(root->val>key){
        search(root->left,key);
    }

    else{
        search(root->right,key);
    }
}


Node* inorderSucc(Node* root){
    Node* curr=root;
    while(curr && curr->left){
        curr=curr->left;
        
    }
    return curr;
}

Node* Delete(Node* root,int data){
    if(root->val>data){
        root->left=Delete(root->left,data);
    }

    else if(root->val<data){
        root->right=Delete(root->right,data);
    }

    else{
        if(root->left==NULL){
            Node* temp=root->right;
            free(root);
            return (temp);
        }

        else if(root->right==NULL){
            Node* temp=root->left;
            free(root);
            return temp;
        }

        else{
            Node* succ=inorderSucc(root->right);
            root->val=succ->val;
            root->right=Delete(root->right,succ->val);
            
        }

        return root;
    }
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

    Node* root=NULL;
    root=create(root,8);
    create(root,43);
    create(root,23);
    create(root,12);
    create(root,6);
    create(root,82);
    create(root,45);
    create(root,4);
    create(root,2);
    create(root,9);
    inorder(root);
    root=Delete(root,2);
    cout<<endl;
    inorder(root);
    
    
 

}