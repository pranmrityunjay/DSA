#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void bubbleSort(int *arr,int n){
    for(int i=0;i<n;i++){
    for(int j=0;j<n-1;j++){
        if(arr[j+1]<arr[j]){
            swap(arr[j+1],arr[j]);
        }
    }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[]={54,67,211,34,65,43,5,32,77,64,34,22,11,32};
    bubbleSort(arr,14);
}
