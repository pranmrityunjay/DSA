#include<bits/stdc++.h>
using namespace std;
class Queue{

     public:
    int size;
    int *arr;
    int rear;

    Queue(int size){
        this->size=size;
        arr=new int[size];
        rear=-1;
    }

    void push(int data){
        if(size-rear>1){
            rear++;
           arr[rear]=data;
            }
        else{
            cout<<"size is full"<<endl;

        }
    }

    void pop(){
        if(rear==-1){
            cout<<"empty"<<endl;
        }
        else{
            for(int i=0;i<rear;i++){
                arr[i]=arr[i+1];
            }
            rear--;
        }
    }

    bool empty(){
        return rear==-1;
    }

    int peak(){
        if(rear>=0){
            return arr[0];
        }
        else{
            cout<<"Empty"<<endl;
        }
    }
   


};
int main(){

    Queue q1(6);
    q1.push(12);
    q1.push(34);
    q1.push(89);

    q1.pop();
    while(!q1.empty()){
        cout<<q1.peak()<<endl;
        q1.pop();
    }




   
    


}