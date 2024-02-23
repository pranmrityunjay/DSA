#include<bits/stdc++.h>
using namespace std;
int find(int n){
    int i=0;
    int ans=0;
    while(n!=0){
        int digit=n%10;
        ans=digit*pow(10,i)+ans;
        n/=10;
        i++;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    int p=find(n);
    cout<<p<<endl;
}