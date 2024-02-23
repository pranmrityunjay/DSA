#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int l,int mid,int h){
    int i=l;
    int j=mid+1;
    int k=l;
    int result[100];
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
    for(int i=l;i<=h;i++){
        arr[i]=result[i];
    }


}
void merge1(int arr[],int size){
    int p;
    for(p=2;p<=size;p*=2){
        for(int i=0;i<=size-p;i+=p){
            int mid,h;
            int l=i;
            h=i+p-1;
            mid=(l+h)/2;
            merge(arr,l,mid,h);
        }
    }
     if (p / 2 < size) {
        merge(arr, 0, p / 2, size - 1);
    }
}
int main(){
    int arr[]={2,4,32,54,7,53,54,8};
    int size=8;
    merge1(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}