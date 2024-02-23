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
    Node* new_Node=new Node(data);
    new_Node->next=head;
    head=new_Node;

}

// function for adding a node to last
void addAtLast(Node* &head,int data){
    Node* new_Node=new Node(data);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=new_Node;

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

    addAtStart(head,2);
    addAtStart(head,29);
    addAtStart(head,22);
    addAtStart(head,1);
    addAtStart(head,61);
    addAtStart(head,34);
    display(head);
    addAtLast(head,1);
    addAtLast(head,67);
    addAtLast(head,32);
    addAtLast(head,90);
    display(head);



   




}