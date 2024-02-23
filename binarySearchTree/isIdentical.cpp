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

bool isBalanced(Node* root1,Node* root2){
    if(root1==NULL && root2==NULL){
        return true;
    }

    if(root1==NULL || root2==NULL){
        return false;
    }

    else{
        bool check1=root1->val==root2->val;
        bool check2=isBalanced(root1->left,root2->left);
        bool check3=isBalanced(root1->left,root2->left);
        return check1 && check2 && check3; 

    }

}



int main(){

    Node* root1=new Node(8);
    root1->left=new Node(9);
    Node* root2=new Node(8);
    root2->left=new Node(9);
    bool ans=isBalanced(root1,root2);
    if(ans){
        cout<<ans<<endl;
    }


    
}