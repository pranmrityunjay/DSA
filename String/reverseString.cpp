#include<bits/stdc++.h>
#include<iostream>
using namespace std;
string reverse(string p,int size){
    int s=0;
    int e=size-1;
    while(s<=e){
        swap(p[s++],p[e--]);
    }
    return p;
}
int main(){
    string p="abcjduei";
    string b=reverse(p,8);
    cout<<b<<endl;
}