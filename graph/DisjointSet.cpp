#include<bits/stdc++.h>
using namespace std;
class DisjointSet{
    vector<int>rank,parent;
    public:
    DisjointSet(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);

        for(int i=0;i<=n;i++){
            parent[i]=i;
        }

    }

    int findUPar(int node){
        if(node==parent[node])
        return node;

        return parent[node]=findUPar(parent[node]);
    }


    void unionByRank(int u,int v){
        int ulp_u=findUPar(u);
        int ulp_v=findUPar(v);

        if(ulp_u==ulp_v) return ;
        if()
    }

};