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

  Node* reverse(){
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
   
    void display(){
       Node* temp=head;
        while(temp!=0){
            cout<<temp->val<<" ";
            temp=temp->next;
            
        }

        cout<<"NULL"<<endl;
    }};

    bool reverseHalf(Node* head){
        Node* slow=head;
        Node* fast=head;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            
        }

        Node* curr=slow->next;
        slow->next=NULL;
        Node* prev=slow;
        while(curr!=NULL){
            Node* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }

        Node* temp1=head;
        Node* temp2=prev;
        while(temp2!=NULL){
            if(temp1->val!=temp2->val){
                return false;
            }
            else{
                temp1=temp1->next;
                temp2=temp2->next;

            }
            
        }
        return true;

        

        
    }


   
int main(){

    LinkedList ll1;
    ll1.addAtLast(78);
    ll1.addAtLast(21);
    ll1.addAtLast(100);
    ll1.addAtLast(499);
    ll1.addAtLast(499);
    ll1.addAtLast(100);
    ll1.addAtLast(21);
    ll1.addAtLast(78);
    
    bool head=reverseHalf(ll1.head);
    cout<<head<<endl;


   
   

    

   








  
    
    
    

}