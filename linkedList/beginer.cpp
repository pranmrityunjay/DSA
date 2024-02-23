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

    void insertAtPosition(Node* head,int data,int pos){
        if(pos==0){
            addAtStart(head,data);
        }
        Node* new_node=new Node(data);
        Node* temp=head;
        int i=0;
        while(i!=pos-1){
            temp=temp->next;
            i++;
            
        }

        new_node->next=temp->next;
        temp->next=new_node;
        
        
    
    }

    void updateAtPosition(Node* head,int data,int pos){
        Node* new_node=new Node(data);
        Node* temp=head;
        int i=0;
        while(i!=pos-1){
            i++;
            temp=temp->next;
        }

        Node* x=temp->next;
        new_node->next=temp->next->next;
        temp->next=new_node;
        free(x);

    }

    void deleteHead(Node* &head){
        Node* temp=head;
        Node* x=head;
        head=temp->next;
        free(x);
    }
    void deleteTail(Node* &head){
        Node* secondLast=head;
        
        while(secondLast->next->next!=NULL){
            
            secondLast=secondLast->next;


        }
        secondLast->next=NULL;
        

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
    display(head);
    addAtLast(head,67);
    addAtLast(head,6);
    addAtLast(head,99);
    display(head);
    insertAtPosition(head,11,3);
    display(head);
    updateAtPosition(head,9,4);
    display(head);
    deleteHead(head);
    display(head);
    deleteTail(head);
    display(head);


    
}