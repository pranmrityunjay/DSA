#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void selectionSort(int *arr,int n){
    for(int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>current){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[]={43,5,3,32,56,32,21,23,4,67,76,3,21,12};
    selectionSort(arr,14);
}