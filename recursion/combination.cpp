#include<bits/stdc++.h>
using namespace std;
int NCR(int n,int r){
    if(n==r || r==0){
        return 1;
    }

    return NCR(n-1,r-1)+NCR(n-1,r);
}
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int r;
    cout<<"Enter the value of r"<<endl;
    cin>>r;
    int ans=NCR(n,r);
    cout<<ans<<endl;
}
