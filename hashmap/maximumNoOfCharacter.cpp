#include<bits/stdc++.h>
using namespace std;

int main(){
    string jay="abchjfdjnmdshjasvfekjkjlcdhjdswkmlsa";
    map<char,int>count;
    for(int i=0;i<jay.size();i++){
        char c=jay[i];
        count[c]++;
    }

   // cout<<count[1]<<endl;
    char maxc;
    int max=INT_MIN;
    for(auto ele:count){
        if(max<ele.second){
        max=ele.second;
        maxc=ele.first;
        
        }
    }

    cout<<maxc<<endl;

   

    
}