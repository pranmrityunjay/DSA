#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main(){

    string jay1="mrityhiiunjay";
    string jay2="jaytyumrinihi";
    unordered_map<char,int>count;

    for(auto ele:jay1){
        count[ele]++;
    }


   for(auto hii:jay2){
    if(count.find(hii)==count.end()){
        cout<<"wrong answer<<endl;";
    }else{
        count[hii]--;
    }
   }

   for(auto ch:count){
    if(ch.second!=0){
        cout<<"wrong answer"<<endl;
    }

   }
 
   

    }



