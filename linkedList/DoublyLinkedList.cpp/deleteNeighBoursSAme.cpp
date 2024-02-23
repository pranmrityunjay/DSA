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
        head=NULL;
        tail=NULL;
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
            Node* temp=head;
            temp->prev=new_node;
            new_node->next=temp;
            head=new_node;
        }
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;

        }

        cout<<"NULL"<<endl;
    }

  void deleteNeighBour(Node* &head,Node* &tail){
    Node* currPtr=tail->prev;
    while(currPtr!=head){
        Node * prevNode=currPtr->prev;
        Node* nextNode=currPtr->next;
        if(prevNode->val==nextNode->val){
            prevNode->next=nextNode;
            nextNode->prev=prevNode;
       // free(currPtr);

        }
        currPtr=prevNode;
    }
  }
  };



int main(){
    DoublyLinkedList* dll1=new DoublyLinkedList();
    dll1->addAtStart(21);
    dll1->addAtStart(24);
    dll1->addAtStart(121);
    dll1->addAtStart(901);
    dll1->addAtStart(14);
    dll1->addAtStart(98);
    dll1->addAtStart(56);
    dll1->addAtStart(67);
    dll1->addAtStart(561);
    dll1->addAtStart(67);
    dll1->addAtStart(9);
    dll1->display();
    dll1->deleteNeighBour(dll1->head,dll1->tail);
     dll1->display();


}
