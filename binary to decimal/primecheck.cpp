#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    for(int i=2;i<n;i++){
        
        if(n%2==0){
          cout<<"not prime";
          return 0;
          
        }
    }
    cout<<"prime"<<endl;
}