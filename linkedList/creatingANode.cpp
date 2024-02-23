#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next=NULL;
    Node(int data){
        this->data=data;
    }

};
int main(){

    Node *n1=new Node(5);
    cout<<"print data value "<<n1->data<<endl;
    cout<<"address of next node "<<n1->next<<endl;
    
}