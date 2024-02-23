#include<bits/stdc++.h>
using namespace std;
map<int,string>ans;
void sayDigit(int n){
    if(n==0){
        return;
    }
    int digit=n%10;
    ans[0]="zero";
    ans[1]="one";
    ans[2]="two";
    ans[3]="three";
    ans[4]="four";
    ans[5]="five";
    ans[6]="six";
    ans[7]="seven";
    ans[8]="eight";
    ans[9]="nine";

    sayDigit(n/10);
    cout<<ans[digit]<<endl;


}


int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    sayDigit(n);
}