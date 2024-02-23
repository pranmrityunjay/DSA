#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        this->val=data;
        next=NULL;
    }};

    void addAtStart(Node* &head,int data){
        Node* new_Node=new Node(data);
        new_Node->next=head;
        head=new_Node;
    }
    void display(Node* head){
        Node* temp=head;
        while(temp!=0){
            cout<<temp->val<<endl;
            temp=temp->next;
        }

        cout<<"NULL"<<endl;
    }


int main(){

   /* Node* n1=new Node(3);
    cout<<n1->val <<" "<< n1->next;
    */

   Node* head=NULL;
   addAtStart(head,21);
   addAtStart(head,34);
   addAtStart(head,23);
   display(head);


    
}