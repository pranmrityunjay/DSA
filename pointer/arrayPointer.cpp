#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int *p=arr;
    for(int i=0;i<n;i++){
        cin>>p[i];
    }


     for(int i=0;i<n;i++){
        cout<<p[i]<<endl;
    }
}