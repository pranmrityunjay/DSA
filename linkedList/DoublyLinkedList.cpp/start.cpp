#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int data){
        this->val=data;
        next=NULL;
        prev=NULL;
    }

};

class DoublyLinkedList{
    public:
    Node* head;
    Node* tail;

    DoublyLinkedList(){
        this->head=NULL;
        this->tail=NULL;
    }

    DoublyLinkedList(Node* head,Node* tail){
        this->head=head;
        this->tail=tail;
    }

    void addAtStart(int data){
        Node* new_node=new Node(data);
        if(head==NULL){
            head=new_node;
            tail=new_node;
        }
        else{
            new_node->next=head;
            head->prev=new_node;
            head=new_node;
        }
    }

    void addAtLast(int data){

        Node* new_node=new Node(data);
        if(tail==NULL){
            head=new_node;
            tail=new_node;
        }
       
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;

    }

    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

    void addAtPostition(int data,int pos){
        Node* new_node=new Node(data);
        Node* temp=head;
        int i=0;
        while(i!=pos-1){
            temp=temp->next;
            i++;
        }
        new_node->next=temp->next;
        new_node->prev=temp;
        temp->next=new_node;


    }
    void deletePos(int pos){
        if(head==NULL){
            return;
        }
        int i=0;
        Node* temp=head;
        while(i!=pos-1){
            temp=temp->next;
            i++;
        }
        Node* f=temp->next;
        temp->next=temp->next->next;
        temp->next->next->prev=temp;
        free(f);

    }
    void deleteStart(){
        if(head==NULL){
            return;
        }
        Node* temp=head;
        head=head->next;

        if(head==NULL){
            tail=NULL;
        }
        else{
            head->prev=NULL;
        }

        free(temp);

    }

    void deleteAtEnd(){
        if(head==NULL){
            return;
        }

        Node* temp=tail;
        tail=tail->prev;
        if(temp==NULL){
            head==NULL;
        }
        else{
            
            tail->next=NULL;
        }
        free(temp);
    }

};

int main(){
Node* node1=new Node(1);
DoublyLinkedList* dll1=new DoublyLinkedList(node1,node1);
dll1->display();
dll1->addAtStart(21);
dll1->addAtStart(34);
dll1->addAtStart(98);
dll1->addAtStart(78);
dll1->addAtStart(32);
dll1->addAtStart(105);
dll1->addAtStart(45);
dll1->addAtStart(122);
dll1->display();
dll1->addAtLast(99);
dll1->display();
dll1->addAtPostition(999,4);
dll1->display();
dll1->deletePos(3);
dll1->display();
dll1->deleteAtEnd();
dll1->display();





}