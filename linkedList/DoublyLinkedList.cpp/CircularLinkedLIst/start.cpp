#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int data)
    {
        this->val = data;
        next = NULL;
    }
};

class CircularLinkedList
{
public:
    Node *head;

    CircularLinkedList()
    {
        head = NULL;
    }

    CircularLinkedList(Node *head)
    {
        this->head = head;
    }

    void addAtStart(int data)
    {
        Node *new_node = new Node(data);
        if (head == NULL)
        {
            head = new_node;
            head->next = head;
        }
        else
        {
            Node *temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            new_node->next = head;
            temp->next = new_node;
            head = new_node;
        }
    }
    void addAtLast(int data)
    {
        Node *new_node = new Node(data);
        if (head == NULL)
        {
            head = new_node;
            head->next = head;
        }
        else
        {
            Node *temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }

            temp->next = new_node;
            new_node->next = head;
        }
    }

    void addAtPosition(int data, int pos)
    {
        if (pos == 0)
        {
            addAtStart(data);
        }
        else
        {
            Node* new_node=new Node(data);
            int i = 0;
            Node *temp = head;
            while (i!=pos-1){
                temp=temp->next;
                i++;

            }
            new_node->next=temp->next;
            temp->next=new_node;

        }
    }
  void deleteHead(){
    if(head==NULL){
        return;
    }
    else{
    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    head=head->next;
    temp->next=head;
    }
  }

    void deleteAtLast(){
    Node* temp=head;
    if(head==NULL){
        return;
    }
    if(temp->next==head){
        head=NULL;
    }
    while(temp->next->next!=head){
        temp=temp->next;

    }
    temp->next=head;


    
  }


void display()
{
    Node *temp = head;
    do
    {
        cout << temp->val << " ";
        temp = temp->next;
    } while (temp != head);

    cout << "NULL" << endl;
}
};


int main()
{
    CircularLinkedList *Cll1 = new CircularLinkedList();
    Cll1->addAtStart(21);
    Cll1->addAtStart(2);
    Cll1->addAtStart(45);
    Cll1->addAtStart(89);
    Cll1->addAtStart(56);
    Cll1->addAtStart(23);
    Cll1->addAtStart(99);
    Cll1->addAtStart(134);
    Cll1->display();
    Cll1->addAtLast(89);
    Cll1->addAtLast(56);
    Cll1->addAtLast(23);
    Cll1->addAtLast(99);
    Cll1->addAtLast(134);
    Cll1->display();
    Cll1->addAtPosition(9911,3);
     Cll1->display();
     Cll1->deleteHead();
     Cll1->display();
     Cll1->deleteAtLast();
      Cll1->display();
}
