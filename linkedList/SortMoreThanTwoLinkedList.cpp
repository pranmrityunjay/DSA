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
  Node* shortedLinkedList(Node* head1,Node* head2){

    Node* temp1=head1;
    Node* temp2=head2;
 /*  LinkedList* dummy_node=new LinkedList(NULL);
    dummy_node->addAtLast(21);

    Node* temp3=dummy_node->head;
*/
   

    while(temp1!= NULL && temp2 != NULL){

        if(temp1->val > temp2->val){
            temp3->next=temp2;
            temp2=temp2->next;
        }
        else{
             temp3->next=temp1;
            temp1=temp1->next;

        }
        temp3=temp3->next;
    }

    while(temp1!=NULL){
        temp3->next=temp1;
            temp1=temp1->next;
            temp3=temp3->next;


    }

    while(temp2!=NULL){
        temp3->next=temp2;
            temp2=temp2->next;
            temp3=temp3->next;

    }

    return dummy_node->head->next;
}

Node* shortMoreThanTwoLinkedList(vector<Node*>list){
    if(list.size()==0){
        return NULL;
    }

    while(list.size()>1){
        Node* afterSorting = shortedLinkedList(list[0],list[1]);
        list.push_back(afterSorting);
        list.erase(list.begin());
        list.erase(list.begin());



    }
    return list[0];

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

     LinkedList ll2;
    ll2.addAtLast(19);
    ll2.addAtLast(34);
    ll2.addAtLast(48);
    ll2.addAtLast(65);
    ll2.addAtLast(66);
    ll2.addAtLast(86);
    ll2.addAtLast(98);
    ll2.addAtLast(108);
    ll2.addAtLast(112);
    ll1.display();
    ll2.display();

    LinkedList ll3;
    ll3.addAtLast(2);
    ll3.addAtLast(10);
    ll3.addAtLast(56);
    ll3.addAtLast(89);
    ll3.addAtLast(98);
    ll3.addAtLast(106);
    ll3.addAtLast(107);
    ll3.addAtLast(111);
    ll3.addAtLast(115);
    ll3.addAtLast(118);
    ll3.addAtLast(119);
    ll3.addAtLast(122);
    ll3.display();
    vector<Node*>list;
    list.push_back(ll3.head);
    list.push_back(ll2.head);
    list.push_back(ll1.head);
    Node* ans=shortMoreThanTwoLinkedList(list);
    LinkedList ll4(ans);
    ll4.display();


}

   /*Node* ans= shortedLinkedList(ll1.head,ll2.head);
    LinkedList *ll3=new LinkedList(ans);
    ll3->display();

    
*/
    

