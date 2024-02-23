#include<bits/stdc++.h>
#include<iostream>
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
        this->head=NULL;
        this->tail=NULL;

    }

    void  enqueue(int data){
        Node* newNode =new Node(data);
        if(this->head==NULL){
            head=tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=tail->next;
        }
        size++;
    }

    void dequeue(){
        if(head==NULL){
            return;
        }
        else{
            Node* oldhead=head;
            Node* newhead=head->next;
            head=newhead;
            if(head==NULL) 
            tail=NULL;
            oldhead->next=NULL;
            delete oldhead;
            size--;



        }
    }

    int getSize(){
        return size;
    }

    bool isEmpty(){
        return head==NULL;
    }

    int front(){
        if(head==NULL){
            return -1;
        }
        else{
            return head->val;
        }
    }

};


int main(){
    Queue q1;
    q1.enqueue(1);
    q1.enqueue(12);
    q1.enqueue(41);
    q1.enqueue(91);
    q1.enqueue(14);
    q1.dequeue();

    while(!q1.isEmpty()){
        cout<<q1.front()<<endl;
        q1.dequeue();

    }


}