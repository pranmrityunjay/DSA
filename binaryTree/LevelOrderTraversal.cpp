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

void levelOrder(Node* root){
    if(root==NULL){
        return;
    }

    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* node=q.front();
        q.pop();
        if(node!=NULL){
            cout<<node->val<<" ";
            if(node->left){
                q.push(node->left);
            }

              if(node->right){
                q.push(node->right);
            }

        }
          else if(!q.empty()){
            q.push(NULL);
            cout<<endl;
    
   }
    }

 
}



    

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    levelOrder(root);


}