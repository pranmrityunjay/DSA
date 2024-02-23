#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void countSort(int *arr,int n,int k){
    int result[17];
    int count[k+1]={0,0,0,0,0,0,0,0,0,0};  
    for(int i=0;i<n;i++){
        ++count[arr[i]];
    }
    for(int i=1;i<=k;i++){
        count[i]=count[i]+count[i-1];
    }

    for(int i=n-1;i>=0;i--){
       result[--count[arr[i]]] =arr[i];
    }
    // for(int i=0;i<17;i++){
    //     arr[i]=result[i];
    // }
    for(int i=0;i<17;i++){
        cout<<result[i]<<endl;
    }


}
int main(){
    int arr[]={2,1,1,0,2,5,4,0,2,8,7,7,9,2,0,1,9};
    countSort(arr,17,9);
}