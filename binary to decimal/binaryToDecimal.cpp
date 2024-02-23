#include<bits/stdc++.h>
using namespace std;
int find(int n){
    int i=0;
    int ans=0;
    while(n!=0){
        int bit=n%10;
        ans=bit*pow(2,i)+ans;
        i++;
        n/=10;
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