#include<iostream>
#include<vector>
using namespace std;

// Weighted Undirected

int main(){
int vertex, edge;
cout << "Enter the vertex and edges: " << endl;
cin >> vertex >> edge;

vector<vector<int>>AdjMat(vertex, vector<int>(edge, 0));

int u, v, weight;
for(int i = 0; i < edge; i++){
cin >> u >> v >> weight;
AdjMat[u][v] = weight;
AdjMat[v][u] = weight;
}

for(int i = 0; i < vertex; i++){
  for(int j = 0; j < AdjMat[i].size(); j++){
     cout << AdjMat[i][j] << " ";
  }
  cout << endl;
}
}