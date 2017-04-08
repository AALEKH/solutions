// Number of connected components in an Undirected graph

Important Point:
1) If you visit one node of a connected graph then all the connected componenets are marked visit, this is because of of stack nature of dfs traversal

int connectedComponents = 0;

int adj[V]; //Adjacent list

boolean visited = new boolean(V);

void dfs(int s) {
  visited[s] = true;
  for(int i = 0; i <= adj[s].size(); i++) {
    if(visited[adj[s][i]] == false) {
      dfs(adj[s][i]);
    }
  }
}


for(int i = 0; i <= nodes; i++) {
  dfs(i);
  connectedComponents++;
}
