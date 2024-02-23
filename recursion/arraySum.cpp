#include<bits/stdc++.h>
using namespace std;
int sum(int* arr,int n){
    if(n==0){
        return 0;
    }
    
    return arr[0]+sum(arr+1,n-1);
}
int main(){
    int arr[]={1,4,5,2,46,3};
    int ans=sum(arr,6);
    cout<<ans<<endl;
}