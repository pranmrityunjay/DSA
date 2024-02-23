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

Node* detectLoop(Node* head){
    Node* slow=head;
    Node* fast=head;

    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        return head;
    }
    while(slow !=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast){
            Node* start=head;
            while(start->next!=slow->next){
                slow=slow->next;
                start=start->next;
            }
             slow->next=NULL;
        }
    }
  

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
    ll1.head->next->next->next->next->next->next->next=ll1.head->next->next->next;
   // ll1.display();

    Node* ans=detectLoop(ll1.head);
   
    
     ll1.display();

    
   // cout<<middle->val;
    

}
