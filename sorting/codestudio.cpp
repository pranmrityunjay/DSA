#include<iostream>
using namespace std;
void merge(int *arr,int start,int mid,int end){
    int i=start;
    int j=mid+1;
    int result[100];
    int k=start;

    while(i<=mid && j<=end){
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
   
   for(;j<=mid;j++){
    result[k++]=arr[j];
   }

   for(int i=0;i<k;i++){
    arr[i]=result[k++];
   }

}
void  breaking(int*arr,int start,int end){
    if(start>=end){
        return;
    }
    int mid=(start+end)/2;
    breaking(arr,start,mid);
    breaking(arr,mid+1,end);
    merge(arr,start,mid,end);
}
int main(){
    int arr[]={12,100,56,2,20,342,98,22,55,7,464,355,57,335};
    breaking(arr,0,13);
    for(int i=0;i<13;i++){
        cout<<arr[i]<<endl;
    }
}