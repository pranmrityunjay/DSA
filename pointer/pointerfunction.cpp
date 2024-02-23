#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int update(int arr[],int n){
    *arr=*(arr+1)+1;

}
int main(){
    int arr[]={1,23,45,54,35,32};
    update(arr,6);

    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
    
}