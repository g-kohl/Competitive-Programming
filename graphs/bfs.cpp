#include <bits/stdc++.h>
using namespace std;

#define SIZE 100

void bfs(vector<vector<int>> &g, vector<int> &visited, queue<int> &adjacents, int v){
    int next;

    visited[v] = true;

    for(int it : g[v]){
        if(!visited[it])
            adjacents.push(it);
    }

    if(!adjacents.empty()){
        next = adjacents.front();
        adjacents.pop();

        bfs(g, visited, adjacents, next);
    }
}

int main(){
    vector<vector<int>> g(SIZE+1);
    vector<int> visited(SIZE+1);
    queue<int> adjacents;
    int v, e, v1, v2, start=0;

    cin >> v >> e;

    for(int i=0; i<e; i++){
        cin >> v1 >> v2;

        g[v1].push_back(v2);
        // g[v2].push_back(v1);
    }

    bfs(g, visited, adjacents, start);

    cout << endl << "Nodes visited starting by " << start << ": ";

    for(int i=0; i<visited.size(); i++)
        if(visited[i])
            cout << i << " ";

    return 0;
}