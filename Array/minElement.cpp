#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int printMin(int arr[],int size){
    int min=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];


        }

    }
    return min;

}
int main(){
    int arr[20]={1,20,0,23,-42,8,64,37,2};
    cout<<printMin(arr,9)<<endl;
}