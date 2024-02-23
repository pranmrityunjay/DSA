#include<bits/stdc++.h>
using namespace std;
class Queue{
    int *arr;
    int capacity;
    int rear;
    public:
    Queue(int size){
        capacity=size;
        arr=new int[size];
        rear=-1;

    }

    void enqueue(int data){
       if(rear==capacity-1){
        cout<<"size full"<<endl;
       }
       else{
        rear++;
        arr[rear]=data;

       }
    }

    int dequeue(){
        if(rear==-1){
            cout<<"empty"<<endl;
        }

        else{
            int result=arr[0];

            for(int i=0;i<rear;i++){
                arr[i]=arr[i+1];
            }
            rear--;
            return result;
        }


    }

    int getFront(){
        if(rear==-1){
            cout<<"empty"<<endl;
        }
        else{
            return arr[0];
        }
    }

    bool isEmpty(){
        return rear==-1;
    }

};
int main(){

    Queue q1(6);
    q1.enqueue(3);
     q1.enqueue(65);
      q1.enqueue(25);
       q1.enqueue(12);
        q1.enqueue(32);
         q1.enqueue(90);
          q1.dequeue();
          while(!q1.isEmpty()){
            cout<<q1.getFront()<<endl;
            q1.dequeue();
          }

            
            

}