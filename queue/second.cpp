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

class Queue{
    public:
    Node* head;
    Node* tail;
    int size;

    Queue(){
        head=NULL;
        tail=NULL;
    }

    void enqueue(int data){
        Node* newNode=new Node(data);
        if(head==NULL){
            head=tail=newNode;
        }

        else{
            tail->next=newNode;
            tail=newNode;
        }
    }

    void dequeue(){
        if(head==NULL){
            cout<<"queue is empty";
        }
        else{
            Node* oldHead=head;
            head=head->next;
            oldHead->next=NULL;
            delete oldHead;
        }

    }

    bool isEmpty(){
        return head==NULL;
    }
   

   int peak(){
    if(head==NULL){
        return -1;
    }
    else{

    return head->val;
   }}
   



};
int main(){

    Queue q1;
   // 
    q1.enqueue(4);
    q1.enqueue(34);q1.enqueue(42);q1.enqueue(49);q1.enqueue(32);q1.enqueue(12);
   // q1.dequeue();

    while(!q1.isEmpty()){
        cout<<q1.peak()<<endl;
        q1.dequeue();

    }


   

    

}