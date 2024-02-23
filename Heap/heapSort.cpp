#include<bits/stdc++.h>
using namespace std;
void heapyfie(int* arr,int size,int i){
    int highest=i;
    int left=2*i;
    int right=2*i+1;
    if(left<size && arr[highest]<arr[left])
    highest=left;

    if(left<size && arr[highest]<arr[right])
    highest=right;

    if(i!=highest){
        swap(arr[highest],arr[i]);
        heapyfie(arr,size,highest);

    }
}

void heap(int* arr,int n){
    int size=n;

    while(size>1){
        swap(arr[1],arr[size]);
        size--;
        heapyfie(arr,size,1);
    }

}

int main(){
    int arr[]={-1,32,45,36,48,65,43,56,40,3,67,43,5};
    int size=12;
    for(int i=size/2;i>0;i--){
        heapyfie(arr,size,i);

    }

    for(int i=1;i<=size;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    heap(arr,12);


     for(int i=1;i<=size;i++){
        cout<<arr[i]<<endl;
    }


}