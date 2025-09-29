#include<iostream>
#include<vector>
using namespace std;

// Unweighted Undirected Graph

int main(){
 int vertex, edges;
 cout << "Enter the vertex and Edges: " << endl;
 cin >> vertex >> edges;
 int u, v;

 vector<vector<bool>>AdjMat(vertex, vector<bool>(edges,0));

 for(int i = 0; i < edges; i++){
  cin >> u >> v;
  AdjMat[u][v] = 1;
  AdjMat[v][u] = 1;
 }

 for(int i = 0; i < vertex; i++){
  for(int j = 0; j < AdjMat[i].size(); j++){
    cout << AdjMat[i][j] << " ";
  }
  cout << endl;
 }
}