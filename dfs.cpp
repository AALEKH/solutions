// Program to Demonstrate Depth First Search


1) Using Stack

int s; // Denotes root element

int visited[V];
int ads[V]; // Adjacent List
for(int i = 0; i < V; i++) {
  visited[i] = false;
}

stack<int> s;

s.push(s);

while(!s.empty()) {
  int element = s.pop();
  stack<int>::iterator iter;
  
  for(iter = adv[element].begin(); iter != adv[element].end(); ++iter){
    if(visited[*iter] == false){
      visited[*iter] = true;
      s.push(iter);
    }
  }

}

2) Using Recursion

void dfs(int s) {
  visited[s] = true;
  for(int i = 0 ; i <= adj[s].size(); i++){
    dfs(adj[s][i]);
  }
}
