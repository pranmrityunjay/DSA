#include<bits/stdc++.h>
using namespace std;
class Heap{
    public:
    int arr[100];
    int size;

    Heap(){
        arr[0]=-1;
        this->size=0;
    }

    void insert(int data){
        size=size+1;
        int index=size;
        arr[index]=data;
        while(index>1){
            int parent=index/2;
            if(arr[parent]<arr[index]){
            swap(arr[parent],arr[index]);
            index=parent;
            }
            else{
                return;
            }
        }
    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<endl;
        }
    }

};
int main(){
    Heap h1;
    h1.insert(21);
    h1.insert(89);
    h1.insert(80);
    h1.insert(24);
    h1.insert(65);
    h1.insert(78);
    h1.print();  






}