#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node(int data){
        this->val=data;
        next=NULL;
    }

};

void insertAtHead(Node* &head,int data){
    Node* new_Node =new Node(data);
    new_Node->next=head;
    head=new_Node;

}
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<endl;
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){

   /* Node *n1=new Node(5);
   
    cout<<"print data value "<<n1->data<<endl;
    cout<<"address of next node "<<n1->next<<endl; */
// creating empty linkedList
    Node* head=NULL;
    insertAtHead(head,2);
    
    insertAtHead(head,4);
    display(head);


    return 0;

    
}