#include<bits/stdc++.h>
#include<string>
using namespace std;
void reverse(string &jay,int s,int e){
    if(s>e){
        return ;
    }

  swap(jay[s],jay[e]);
  s++;
  e--;

   reverse(jay,s,e);
   



}
int main(){
    string jay="mrityunjjjay";
    reverse(jay,0,jay.size()-1);
    cout<<jay<<endl;


}