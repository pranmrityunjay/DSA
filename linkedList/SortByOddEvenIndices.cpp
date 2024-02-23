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
        Node* new_node=new Node(data);
        if(head==NULL){
            head=new_node;

        }
        
        else{
            Node* temp=head;
            while(temp->next!=NULL){
                temp=temp->next;

            }
            temp->next=new_node;
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



};

Node* sortByOddEven(Node* &head){
    
    Node* evenhead =head->next;
    Node* oddptr=head;
    Node* evenptr=evenhead;
    LinkedList* dummy_node=new LinkedList(NULL);
    dummy_node->addAtLast(99);
    Node* new_ll=dummy_node->head;

    Node* temp3=dummy_node->head;
    temp3->next=head;
    temp3=temp3->next;
    
   while(evenptr!=NULL && evenptr->next!=NULL){
    
     oddptr->next=oddptr->next->next;
     evenptr->next=evenptr->next->next;
     oddptr=oddptr->next;  
     evenptr=evenptr->next;
     temp3->next=oddptr;
     temp3=temp3->next;
        
   } 

   /* LinkedList* dummy_node=new LinkedList(NULL);
    dummy_node->addAtLast(21);
    Node* new_ll=dummy_node->head;

    Node* temp3=dummy_node->head;

    while(evenptr!=NULL && evenptr->next !=NULL){
        oddptr->next=oddptr->next->next;
        evenptr->next=evenptr->next->next;
        temp3->next=oddptr;
        oddptr=oddptr->next;
        evenptr=evenptr->next;
        temp3=temp3->next;
    }

    */
   // temp3->next=evenhead;
   temp3->next=evenhead;
    oddptr->next=evenhead;





     
   
   return dummy_node->head;
  
}
  
int main(){
    
    LinkedList ll1;
    


    ll1.addAtLast(21);
    ll1.addAtLast(41);
    ll1.addAtLast(61);
    ll1.addAtLast(67);
    ll1.addAtLast(89);
    ll1.addAtLast(99);
    ll1.addAtLast(100);
    ll1.addAtLast(111);
    ll1.display();
    Node* ans=sortByOddEven(ll1.head);
    LinkedList* ll2=new LinkedList(ans);
    ll2->display();


   
}

   /*Node* ans= shortedLinkedList(ll1.head,ll2.head);
    LinkedList *ll3=new LinkedList(ans);
    ll3->display();

    
*/
    

