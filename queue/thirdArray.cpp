#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Queue{

     
    int *arr;
    int capacity;
    int rear;


    public:
   
    Queue(int size){
        this->capacity=size;
        arr= new int[size];
        rear=-1;

    }

    void enqueue(int data){
        if(rear ==capacity-1){
        cout<<"FULL"<<endl;
        }
        else{
            rear++;
            arr[rear]=data;
        }
    }

    void  dequeue(){
        if (rear==-1){
            cout<<"empty"<<endl;
        }
      
          else{
            for(int i=0;i<rear;i++){
                arr[i]=arr[i+1];
            }
            rear--;
           
        }
    }
     

    bool isEmpty(){
        return rear==-1;
    }

    int peakk(){
        if(rear==-1){
            return -1;
        }
        else{
            return arr[0];
        }
    }

};


    




int main(){
    Queue q1(5);
    q1.enqueue(8);
    q1.enqueue(90);
    q1.enqueue(88);
    q1.dequeue();




    while(!q1.isEmpty()){
        cout<<q1.peakk()<<endl;
        q1.dequeue();
    }

    
return 0;
}