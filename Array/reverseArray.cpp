#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(arr[s++],arr[e--]);
    }
}
int main(){
    int arr[]={2,34,21,34,43,42,53,56,353,2,46,45,3,4,975,33};
    int n=16;
    reverse(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}