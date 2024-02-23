#include<bits/stdc++.h>
using namespace std;
bool findkey(int arr[],int s,int e,int key){
    
    int mid=(s+e)/2;
    if(s>e){
        return false;
    }
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]<key){
        s=mid+1;
        findkey(arr,s,e,key);

    }
    else{
        e=mid-1;
        findkey(arr,s,e,key);
    }

}
int main(){
    int arr[]={2,4,5,8,9,12,45,67,89,344,555};
    int n=11;
    int s=0;
    int e=n-1;
    int key=5;
    bool ans=findkey(arr,s,e,key);
    if(ans){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
}