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
    void deleteDuplicate(Node* &head){
        Node* temp=head;
        while(temp!=NULL && temp->next != NULL){
            if(temp->val==((temp->next)->val)){
                Node* d=temp->next;
                temp->next =temp->next->next;
                free(d);
               


            }
            else{
                temp=temp->next;
            }
        }


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
    deleteDuplicate(head);
    display(head);

}