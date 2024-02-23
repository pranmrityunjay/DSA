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
    void addAtStart(Node* &head,int data){
        Node* new_node=new Node(data);
        new_node->next=head;
        head=new_node;

    }

    void addAtLast(Node* &head,int data){
        Node* new_node=new Node(data);
        Node* temp=head;
        if(head==NULL){
            head=new_node;
        }
        

        while(temp->next != NULL){
            temp=temp->next;
        }

        temp->next=new_node;
    }
 Node* reverse(Node* head){
    if(head==NULL || head->next==NULL){
        return head;

    }

    Node* new_head=reverse(head->next);
    Node* onehead=head->next;
    onehead->next=head;
    head->next=NULL;
    return new_head;


   
    

 }
    void display(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" -> ";
            temp=temp->next;
        }

        cout<<"NULL"<<endl;
    }

    


int main(){

    Node* head=NULL;
    addAtStart(head,20);
    addAtLast(head,67);
    addAtLast(head,6);
    addAtLast(head,99); 
    addAtStart(head,20);
    addAtLast(head,45);
    addAtLast(head,32);
    addAtLast(head,21);
    display(head);
    Node* new_head=reverse(head);
    display(new_head);
    display(head);

   


    
}