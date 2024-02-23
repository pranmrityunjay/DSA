#include<bits/stdc++.h>
using namespace std;
void mergeArray(int arr1[],int arr2[],int m,int n){
    int merge[m+n+1];
    int i=0;
    int j=0;
    int k=0;
    while(i<m && j<n){
        if(arr1[i]>arr2[j]){
            merge[k++]=arr2[j++];
        }
        else{
            merge[k++]=arr1[i++];
        }
    }
    for(;i<m;i++){
        merge[k++]=arr1[i];
    }
    for(;j<n;j++){
        merge[k++]=arr2[j];
    }
    for(int i=0;i<m+n;i++){
        cout<<merge[i]<<endl;
    }
    
    
    
}

int main(){
    
    int arr1[]={1,3,8,13,19,20,29};
    int arr2[]={4,6,9,23,28,29,30,39,41};
    int m=7;
    int n=9;
    mergeArray(arr1,arr2,m,n);


    
}