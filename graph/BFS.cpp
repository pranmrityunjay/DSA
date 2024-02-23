#include <bits/stdc++.h> 
void makeList(vector<pair<int, int>>&edges,unordered_map<int,set<int>>&List){
    for(int i=0;i<edges.size();i++){
        int u=edges[i].first;
        int v=edges[i].second;


        List[u].insert(v);
        List[v].insert(u);
        
        
    }
}

void bfs(unordered_map<int,set<int>>&List,vector<int>&ans,unordered_map<int,bool>&visited,int node){
    queue<int>q;
    q.push(node);
    visited[node]=1;
    
    while(!q.empty()){
        int frontNode=q.front();
        q.pop();
        ans.push_back(frontNode);
        
    for(auto tra:List[frontNode]){
        if(!visited[tra]){
            q.push(tra);
            visited[tra]=1;
        }
    }
    }
}

vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
   unordered_map<int,set<int>>List;
   unordered_map<int,bool>visited;
   vector<int>ans;
   
   makeList(edges,List);

   for(int i=0;i<vertex;i++){
       if(!visited[i]){
           bfs(List,ans,visited,i);
       }
   }

   return ans;
}