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

  Node* reverse(){
    Node* prev=NULL;
    Node* curr=head;
    while(curr!=NULL){
        Node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;


    }
    return prev;
  }
   
    void display(){
       Node* temp=head;
        while(temp!=0){
            cout<<temp->val<<" ";
            temp=temp->next;
            
        }

        cout<<"NULL"<<endl;
    }};

Node* reverseByK(Node* head,int k){
    Node* temp=head;
    int count=0;
    while(temp->next!=NULL){
        count++;
        temp=temp->next;
    }
    count++;
    temp->next=head;
    Node* start=head;
    int l=count-k;
    while(l-1 !=0){
        start=start->next;
  l--;

    }
    head=start->next;
    start->next=NULL;

  return head;

}
   

   
int main(){

    LinkedList ll1;
    ll1.addAtLast(78);
    ll1.addAtLast(21);
    ll1.addAtLast(100);
    ll1.addAtLast(200);
    ll1.addAtLast(499);
    ll1.addAtLast(8);
    ll1.addAtLast(9000);
    ll1.addAtLast(8);
    ll1.addAtLast(499);
    ll1.addAtLast(200);
    ll1.addAtLast(100);
    ll1.addAtLast(21);
    ll1.addAtLast(78);
    ll1.display();
    int k;
    cout<<"Enter the value of K"<<endl;
    cin>>k;

    Node* new_head=reverseByK(ll1.head,k);
    LinkedList* ans=new LinkedList(new_head);
    ans->display();
   
}