#include<bits/stdc++.h>
using namespace std;
int findCatalan(int n){
    if(n<=1){
        return 1;
    }

    int sum=0;

    for(int i=0;i<=n-1;i++){
        sum+=findCatalan(i)*findCatalan(n-i-1);
    }

   return sum;
}
int main(){
    cout<<findCatalan(2)<<endl;
}