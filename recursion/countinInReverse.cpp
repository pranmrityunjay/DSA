#include<bits/stdc++.h>
using namespace std;
void printNum(int n){
    if(n==0){
        return;
    }
    else{
        printNum(n-1);
        cout<<n<<endl;
    }

}
int main(){
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    printNum(n);
}