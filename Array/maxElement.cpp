#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int printMax(int arr[],int size){
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int arr[]={1,2,320,63,85,38,-34,564,333};
    cout<<printMax(arr,9);
    
}

