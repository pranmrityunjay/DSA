#include<bits/stdc++.h>
using namespace std;
int merge(int arr[],int l,int mid,int h){
  int i,j,k;
  i=l;j=mid+1;k=l;
    int result[100];  
    while(i<= mid && j<=h){
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
    for(int i=0;i<= h;i++){
        cout<<arr[i]<<endl;
    }

}
int main(){
    int arr[]={2,5,8,12,3,6,7,10};
    int l=0;
    int h=7;
   int mid=(l+h)/2;
    merge(arr,l,mid,h);
}