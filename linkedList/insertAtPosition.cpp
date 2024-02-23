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
void addAtLast(Node* head,int data){
    Node* new_Node=new Node(data);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_Node;


}

addAtPosition(Node* head,int data,int pos){
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
    addAtStart(head,78);
    addAtStart(head,72);
    addAtStart(head,2);
    addAtStart(head,99);
    addAtStart(head,8);
    addAtStart(head,345);
    addAtStart(head,49);
    display(head);
    addAtLast(head,1);
    addAtLast(head,3);
    addAtLast(head,89);
    addAtLast(head,6);
    addAtLast(head,39);
    display(head);
    addAtPosition(head,1111,2);
    display(head);

    





}