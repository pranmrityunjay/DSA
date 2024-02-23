#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int findPartiation(int *arr,int l,int h){
   
    int pivot=arr[l];
    int count=0;
    for(int i=l+1;i<=h;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }

    int pivotIndex=l+count;

    swap(arr[l],arr[pivotIndex]);

    int i=l;
    int j=h;

    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<pivot){
           i++;
        }
                
            
        

         while(arr[j]>pivot){
            j--;
         }

        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
            
        }
    }
    return pivotIndex;
}
void quickSort(int *arr,int l,int h){
    if(l>=h){
        return;
    }

    int p=findPartiation(arr,l,h);
    quickSort(arr,l,p-1);
    quickSort(arr,p+1,h);
}
int main(){
    int arr[]={32,45,33,78,4,3,2,5,75,323,67,23};
    quickSort(arr,0,11);

    for(int k=0;k<12;k++){
        cout<<arr[k]<<endl;
    }
}