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

class LinkedList{
    public:
    Node* head;

    LinkedList(){
        head=NULL;
    }

    LinkedList(Node* head){
        this->head=head;
    }


    void addAtLast(int data){
        Node* new_node=new Node(data);
        if(head==NULL){
            head=new_node;

        }
        else{
         Node* temp=head;
         while(temp->next!= NULL){
            temp=temp->next;

         }
         temp->next=new_node;
        }
    }


    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

};

Node* findMiddle(Node* head3){
    Node* slow=head3;
    Node* fast=head3;

    while(fast!=NULL && fast->next !=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;

}
int main(){
    LinkedList ll1;
    ll1.addAtLast(21);
    ll1.addAtLast(45);
    ll1.addAtLast(32);
    ll1.addAtLast(8);
    ll1.addAtLast(25);
    ll1.addAtLast(90);
    ll1.addAtLast(108);
    ll1.addAtLast(17);
    ll1.addAtLast(27);
    ll1.addAtLast(28);
    ll1.addAtLast(111);
    ll1.addAtLast(67);
    ll1.display();
    
  Node* middle =findMiddle(ll1.head);
    
    cout<<middle->val;
    

}
