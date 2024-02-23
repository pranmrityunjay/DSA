#include<bits/stdc++.h>
using namespace std;
void printCounting(int n){
    if(n==0){
        return;
    }
    printCounting(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cout<<"enter value"<<endl;
    cin>>n;
    printCounting(n);
}