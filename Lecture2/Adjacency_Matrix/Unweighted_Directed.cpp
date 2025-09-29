#include<iostream>
#include<vector>
using namespace std;

// Unweighted Directed

int main(){
int vertex, edge;
cout << "Enter the vertex and edges: " << endl;
cin >> vertex >> edge;

vector<vector<bool>>AdjMat(vertex, vector<bool>(edge,0));

int u, v;
for(int i = 0; i < edge; i++){
  cin >> u >> v;
  AdjMat[u][v] = 1;
}

for(int i = 0; i < vertex; i++){
  for(int j = 0; j < AdjMat[i].size(); j++){
    cout << AdjMat[i][j] << " ";
  }
  cout << endl;
}
}