#include<bits/stdc++.h>
using namespace std;
int reverse(int n){
    int i=0;
    int ans=0;
    while(n!=0){
        int digit=n%10;
        ans=ans*10+digit;
        n/=10;
        i++;

    }
    return ans;
}
int main(){
    int n;
    cout<<"ENter number"<<endl;
    cin>>n;
    int p=reverse(n);
    cout<<p<<endl;
}