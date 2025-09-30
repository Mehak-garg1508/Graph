#include<iostream>
#include<vector>
#include<queue>
using namespace std;

// For unweighted undirected

int main(){
  int vertex, edge; 
  cout << "Enter the vertex and edges: "<< endl;
  cin >> vertex >> edge;

vector<int>Adj[vertex];

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

// Breath First Search(BFS)
vector<int>ans;
vector<bool>visited(vertex, 0);
queue<int>q;

q.push(0);
visited[0] = 1;
while(!q.empty()){
  int node = q.front();
  q.pop();
  ans.push_back(node);

  for(int j = 0; j < Adj[node].size(); j++){
    if(!visited[Adj[node][j]]){
      q.push(Adj[node][j]);
      visited[Adj[node][j]] = 1;
    }
  }
}

for(int i = 0; i < ans.size(); i++){
  cout << ans[i] << " ";
}
}