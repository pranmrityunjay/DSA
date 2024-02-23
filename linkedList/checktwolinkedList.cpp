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
    Node * head;
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

 int findLength(Node* head){
    Node* temp=head;
    int count=0;
    if(head==NULL){
        return 0;
    }
    else{
    while(temp!=0){
        count+=1;
        temp=temp->next;
    }
    
}

return count;
}

Node* checkNode(Node* head1,Node* head2,int length1,int length2){
    Node* temp1=head1;
    Node* temp2=head2;
    if(length1>length2){
        while((length1-length2)!=0){
            temp1=temp1->next;
            length1--;
        }

    }
    else{
         while((length2-length1)!=0){
            temp2=temp2->next;
            length2--;
        }

    }

  /*  while(temp1!=NULL && temp2!=NULL){
        if(temp1->val==temp2->val){
            Node* temp3=temp1->next;
            Node* temp4=temp2->next;

            while(temp3!=NULL && temp3!=NULL){
                if(temp1->val!=temp2->val){
                    break;

                }
                else{
                    return temp1->val;
                }
            }
            int ans=temp1->val;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        else{

            temp1=temp1->next;
            temp2=temp2->next;

        }
    } */

    while(temp1!=NULL){
        if(temp1==temp2){
            return temp1;
           
        }
        else{
             temp1=temp1->next;
             temp2=temp2->next;
        }
    }

}


int main(){
    Node* n1=new Node(57);
    LinkedList* ll1=new LinkedList(n1);
    ll1->addAtLast(21);
    ll1->addAtLast(23);
    ll1->addAtLast(78);
    ll1->addAtLast(25);
    ll1->addAtLast(65);
    ll1->addAtLast(43);
    ll1->addAtLast(89);
    ll1->addAtLast(100);
    
    
    ll1->display();

    LinkedList* ll2=new LinkedList();
    
    ll2->addAtLast(90);
    ll2->addAtLast(23);
    ll2->addAtLast(67);
    ll2->head->next->next->next=ll1->head->next->next->next->next->next;
    
    ll2->display();
    int length1=findLength(ll1->head);
    int length2=findLength(ll2->head);
    cout<<length1<<endl;
    cout<<length2<<endl;

    Node* ans=checkNode(ll1->head,ll2->head,length1,length2);
    cout<<ans->val<<endl;

}
