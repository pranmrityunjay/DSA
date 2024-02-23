#include<bits/stdc++.h>
using namespace std;
#include<map>
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
bool floydLoop(Node* head){
      Node* slow=head;
      Node* fast=head;

    if(head==NULL){
        return false;
    }
    if(head->next==NULL){
        return false;
    }
    while(slow !=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast){
           return true;
        }
        

        
    }
  

return false;

}

bool detectLoop(Node* head){
   if(head==NULL){
    return false;
   }
   Node* temp=head;
   map<Node*,bool>detect;

   while(temp!=NULL){
    if(detect[temp]==true){
        return true;
    }
    else{
        detect[temp]=true;
        temp=temp->next;
    }
  
   
   }

   return false;
}


int main(){
    Node* ok=new Node(3);
    LinkedList ll1;
    ll1.addAtLast(23);
   
  // ll1.head->next->next->next->next->next->next->next=ll1.head->next->next->next;
   // ll1.display();

    bool ans=floydLoop(ll1.head);
    if(ans){
        cout<<"loop Detected"<<endl;
    }
    else{
        cout<<"LOOp not detected";
    }
    
  //Node* middle =findMiddle(ll1.head);
    
   // cout<<middle->val;
    

}
