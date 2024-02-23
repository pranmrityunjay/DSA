#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        this->val=data;
        next=NULL;
    }

};


    void addAtLast(Node* &head,int data){
        Node* temp=head;
        Node* new_node=new Node(data);
        if(head==NULL){
            head=new_node;

        }
        else{
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=new_node;
        }

    }

  Node* reverse(Node* &head){
    Node* prev=NULL;
    Node* curr=head;
    while(curr!=NULL){
        Node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;


    }
    return prev;
  }
   
    void display(Node* head){
       Node* temp=head;
        while(temp!=0){
            cout<<temp->val<<" ";
            temp=temp->next;
            
        }

        cout<<"NULL"<<endl;
    }
int main(){
    Node* head=NULL;
    addAtLast(head,20);
    addAtLast(head,20);
    addAtLast(head,22);
    addAtLast(head,22);
    addAtLast(head,44);
    addAtLast(head,44);
    addAtLast(head,44);
    addAtLast(head,45);
    addAtLast(head,99);
    addAtLast(head,99);
    display(head);
    Node* new_head =reverse(head);
    display(new_head);
    display(head);
    
    
    

}