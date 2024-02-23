#include<bits/stdc++.h>
using namespace std;
#include<stack>
int main(){
    string jay="mrityunjay";
    stack<char>store;
    
    for(int i=0;i<jay.length();i++){
        store.push(jay[i]);
    }

    string ans="";

    while(!store.empty()){
        char c=store.top();
        ans.push_back(c);
        store.pop();
    }

    cout<<ans<<endl;

}