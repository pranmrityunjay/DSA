#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void mergeSort(int *arr,int l,int mid,int h){
    int i=l;
    int k=l;
    int j=mid+1;
    int result[100000];

    while(i<=mid && j<=h){
        if(arr[i]<arr[j]){
            result[k++]=arr[i++];
        }
        else{
            result[k++]=arr[j++];
        }
    }

    for(;i<=mid;i++){
        result[k++]=arr[i];
    }

    for(;j<=h;j++){
        result[k++]=arr[j];
    }

    for(int i=l;i<k;i++){
        arr[i]=result[i];
    }

    //  for(int i=l;i<k;i++){
    //     cout<<arr[i]<<endl;
    // }

   
}
void breaking(int *arr,int l,int h){
    if(l<h){
        int mid=(l+h)/2;
        breaking(arr,l,mid);
        breaking(arr,mid+1,h);
        mergeSort(arr,l,mid,h);
    }
}  
int main(){
    int arr[]={32,21,45,22,35,64,43,19};
    breaking(arr,0,7);

     for(int i=0;i<7;i++){
        cout<<arr[i]<<endl;
    }
}