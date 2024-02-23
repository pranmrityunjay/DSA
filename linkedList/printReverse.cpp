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
            return;

        }
        
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=new_node;
        

    }

    void printReverse(Node* head){
       
        if(head == NULL){
            return;

        }

        printReverse(head->next);
        cout<<head->val<<endl;


    }
   
    void display(Node* head){
       
        while(head!=0){
            cout<<head->val<<" ";
            head=head->next;
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
    printReverse(head);
    
    

}