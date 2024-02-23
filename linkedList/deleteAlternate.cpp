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

void deleteAlternate(Node* head){
    Node* v=head;
    while(v!=NULL && v->next!=NULL){
        Node* temp=v->next;
        v->next=v->next->next;
        free(temp);
        v=v->next;
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


using namespace std;
int main(){
    Node* head=NULL;
    addAtLast(head,4);
    addAtLast(head,8);
    
    addAtLast(head,0);
    addAtLast(head,12);
    addAtLast(head,6);
    
    addAtLast(head,20);
    display(head);
    deleteAlternate(head);
    display(head);

}