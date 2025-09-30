#include<iostream>
#include<vector>
using namespace std;

void DFS(int node, vector<vector<int>>&adj, vector<int>&ans, vector<bool>&visited){
  visited[node] = 1;
  ans.push_back(node);
  for(int j = 0; j < adj[node].size(); j++){
   if(!visited[adj[node][j]]){
    DFS(adj[node][j], adj, ans, visited);
   }
  }
}

int main(){
  int vertex, edge; 
  cout << "Enter the vertex and edges: "<< endl;
  cin >> vertex >> edge;

vector<vector<int>>Adj(vertex);

int u, v;
for(int i = 0; i < edge; i++)
{
  cin >> u >> v;
  Adj[u].push_back(v);
  Adj[v].push_back(u);
}

for(int i = 0; i < vertex; i++){
  cout << i << " -> ";
  for(int j = 0; j < Adj[i].size(); j++){
    cout << Adj[i][j] << " ";
  }
  cout << endl;
}

// Depth First Search
vector<int>ans;
vector<bool>visited(vertex,0);
DFS(0,Adj,ans,visited);

for(int i = 0; i < ans.size(); i++){
  cout << ans[i] << " ";
}
}