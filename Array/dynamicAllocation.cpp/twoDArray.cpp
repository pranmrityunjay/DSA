#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"enter size of array"<<endl;
    cin>>row;

     int column;
    cout<<"enter size of array"<<endl;
    cin>>column;
    int **arr=new int*[row];
    for(int i=0;i<column;i++){
        arr[i]=new int [column];
    }

    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];


    }}



    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
        cout<<endl;;
    }

}
// for deletion of array
for(int i=0;i<n;i++){
    delete []arr[i];
}

//for(deletion of array )
delete []arr;