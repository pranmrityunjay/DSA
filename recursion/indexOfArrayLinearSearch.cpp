#include<bits/stdc++.h>
using namespace std;
bool findIndex(int arr[],int size,int key){
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;

    }
    else{
        return findIndex(arr+1,size-1,key);
        
    }
   
    
}

int main(){
    int arr[]={1,3,54,32};
   bool ans= findIndex(arr,4,54);
   if(ans){
    cout<<"found"<<endl;
   }
   else{
    cout<<"not found"<<endl;
   }
}