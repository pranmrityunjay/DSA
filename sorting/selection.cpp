#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        
         int j=i+1;
         int index;
         int ans=arr[i];
        for(;j<n;j++){
            if(arr[j]<=ans){
                ans=arr[j];
                 index=j;
            }
            else{
                continue;
            }
            
        }
        swap(arr[i],arr[index]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[]={2,5,3,6,4,99,43,43,34,23,23};
    selectionSort(arr,11);
    
}