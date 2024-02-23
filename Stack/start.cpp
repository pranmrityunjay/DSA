/*#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int size;
    int top;
    int *arr;

    Stack(int size){
        this->size=size;
        top=-1;
        arr=new int[size];

    }

    void push(int data){
        if(size-top > 1){
            top++;
            arr[top]=data;

        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
    }

    int peak(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
        }
    }

    bool empty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }

};
int main(){

    Stack s1(5);
    s1.push(21);
    s1.push(34);
    s1.push(56);
    s1.push(9);
    s1.push(89);

    cout<<s1.peak()<<endl;
    s1.push(78);
    s1.pop();
    cout<<s1.peak()<<endl;
    cout<<s1.empty()<<endl;


}

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
        


    }


    void push(int data){
        if(size-top>1){
            top++;
            arr[top]=data;
        }
        else{
            cout<<"overflow"<<endl;
        }
    }


    void pop(){
        if(arr[top]>=0){
            top--;


        }
        else{
            cout<<"under flow"<<endl;
        }
    }

    int peak(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
        }
    }

};
int main(){

    Stack s1(5);
    s1.push(21);
    s1.push(234);
    s1.push(938);
    s1.push(73);
    cout<<s1.peak()<<endl;
    s1.pop();
    cout<<s1.peak()<<endl;


}
