#include<bits/stdc++.h>
using namespace std;
bool checkpallindrome(string s,int start,int end){
    if(start>=end){
        return true;
    }
    
        
     if(s[start]!=s[end]){
        return false;
        }
    start++;
    end--;

     checkpallindrome(s,start,end);

    

}
int main(){
    string s;
    cout<<"Enter string"<<endl;

    cin>>s;
    bool ans;//=checkpallindrome(s,0,s.size()-1);
    
        cout<<ans<<"pallindrome"<<endl;
    
}