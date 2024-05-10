#include <bits/stdc++.h>

#define SIZE 100

using namespace std;

void dfs(vector<vector<int>> &g, vector<int> &visited, int v){
    visited[v] = true;

    for(int it : g[v]){
        if(!visited[it])
            dfs(g, visited, it);
    }
}

int main(){
    vector<vector<int>> g(SIZE+1);
    vector<int> visited(SIZE+1);
    int v, e, v1, v2, start=0;

    cin >> v >> e;

    for(int i=0; i<e; i++){
        cin >> v1 >> v2;

        g[v1].push_back(v2);
        // g[v2].push_back(v1);
    }

    dfs(g, visited, start);

    cout << endl << "Nodes visited starting by " << start << ": ";

    for(int i=0; i<visited.size(); i++)
        if(visited[i])
            cout << i << " ";

    return 0;
}