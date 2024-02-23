#include<iostream>
using namespace std;
class circularQueue{
    int *arr;
    int n;
    int front;
    int rear;
    public:
    circularQueue(int size){
        this->n=size;
        arr=new int[n];
    }


    void enqueue(int data){
        if((rear+1)%n ==front){
            return;
        }

        if(front==-1){
            front=0;
        }
        rear=(rear+1)%n;
        arr[rear]=data;
    }


    int dequeue(){
        if(front==-1){
            cout<<"empty"<<endl;
        }

        int result=arr[front];
        if(front==rear){
        front=rear=-1;
        }
        else{
            front=(front+1)%n;
        }

        retuimn result;
    }

};
int main(){

}