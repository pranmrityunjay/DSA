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

    void addAtLast(Node* head,int data){
        Node* new_Node=new Node(data);
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_Node;



    }

    void addAtPosition(Node* &head,int data,int pos){
        if(pos==0){
            addAtStart(head,data);
        }
        Node* temp=head;
        int i=0;
        while(i!=pos-1){
            i++;
            temp=temp->next;
        }
        Node* new_Node=new Node(data);
        new_Node->next=temp->next;
        temp->next=new_Node;

    }

    void updateAtPosition(Node* &head,int data,int pos){
        int i=0;
        Node* temp=head;
      /*  while(i!=pos-1){
            i++;
            temp=temp->next;
        }
        Node* x=temp->next;
        Node* new_Node=new Node(data);
        new_Node->next=x->next;
        temp->next=new_Node;*/
        
        while(i!=pos){
            i++;
            temp=temp->next;
        }
        temp->val=data;
    }

    
    void display(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }


int main(){
    Node* head=NULL;


    addAtStart(head,21);
    addAtStart(head,25);
    addAtStart(head,29);
    addAtStart(head,210);
    addAtStart(head,289);
    addAtStart(head,290);
    display(head);
    addAtLast(head,4673);
    addAtLast(head,8890);
    addAtLast(head,9738);
    display(head);
    addAtPosition(head,99,2);
    display(head);
    updateAtPosition(head,111,2);
    display(head);


}