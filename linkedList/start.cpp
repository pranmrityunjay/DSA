#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data=value;
        next=NULL;
    }

};




int main(){

    Node *n1=new Node(5);
    cout<<"print data value "<<n1->data<<endl;
    cout<<"address of next node "<<n1->next<<endl;
    
}