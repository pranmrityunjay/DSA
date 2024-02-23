#include<bits/stdc++.h>
using namespace std;
void heapyfie(int* arr,int n,int i){
    int largest=i;
    int left=i*2;
    int right=i*2+1;
    if(left<n && arr[largest]<arr[left])
    largest=left;
    if(right<n && arr[largest]<arr[right])
    largest=right;

    if(i!=largest){
        swap(arr[largest],arr[i]);
        heapyfie(arr,n,largest);
    }


}
int main(){
    int arr[]={-1,35,135,24,256,23,56,32};
    int n=8;
    for(int i=n/2;i>0;i--){
        heapyfie(arr,n,i);

    }

    for(int i=1;i<n;i++){
        cout<<arr[i]<<endl;
    }

}