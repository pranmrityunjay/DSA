#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,string>ans;
    ans[0]="mrityunjay";
    ans[1]="sonia";
    ans[2]="kaksha";
    ans[3]="jay";
    ans[4]="hello";
    ans[5]="nainshi";
    ans[8]="nandini";

    // for(auto ele:ans){
    //     cout<<ele.first<<"  "<<ele.second<<endl;
    // }
for(auto itr= ans.begin();itr!=ans.end();itr++){
    cout<<itr->first<<" "<<itr->second<<endl;
}

}