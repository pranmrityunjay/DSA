#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
class Graph{
    public:
    unordered_map<int,list<int>>ans;
    
    void createEdge(int u,int v,bool direction){
        ans[u].push_back(v);

        if(direction==1)
        ans[v].push_back(u);
    }


    void print(){
        for(auto ele:ans){
            cout<<ele.first<<"-->";
            for(auto hello:ele.second){
                cout<<" "<<hello<<"-";

            }

            cout<<endl;
        }
    }

};
int main(){
    int n;
    cout<<"Enter the no. of node"<<endl;
    cin>>n;
    int m;
    cout<<"Enter the no. of edge"<<endl;
    cin>>m;
    Graph * g1=new Graph();
    for(int i=0;i<m;i++){
        int u,v;
        cout<<"Enter node and connected edges"<<endl;
        cin>>u>>v;

        g1->createEdge(u,v,0);
    }

    g1->print();

}