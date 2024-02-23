#include<bits/stdc++.h>
using namespace std;

bool istrue(vector<string>&ans){
    unordered_map<char,int>count;
    for(auto str:ans){
        for(char ch:str){
            count[ch]++;
        }
    }
    int n=ans.size();

    for(int i=0;i<count.size();i++){
        if(count[i]%n!=0){
            return false;
        }

    }

    return true;

}

int main(){
    int n;
    cout<<"Enter size of vector"<<endl;
    cin>>n;
    vector<string>store(n);
    for(int i=0;i<n;i++){
        cin>>store[i];
    }


    cout<<istrue(store)? "yes":"NO";


}