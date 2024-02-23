#include<iostream>
using namespace std;
bool binarySearch(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(arr[mid]==key){
            return true;
        }
        if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=(s+e)/2;

    }
return false;
}
int main(){
    int arr[]={2,4,6,7,8,9,12,23,45};
    int n=9;
    bool p=binarySearch(arr,n,2);
    if(p){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
}