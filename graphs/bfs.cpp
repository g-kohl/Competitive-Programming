#include <bits/stdc++.h>
using namespace std;

#define SIZE 100

void bfs(vector<vector<int>> &g, vector<int> &visited, int v){
    queue<int> q;
    int next;

    visited[v] = true;
    q.push(v);

    while(!q.empty()){
        next = q.front();
        q.pop();

        for(int it : g[next]){
            if(!visited[it]){
                visited[it] = true;
                q.push(it);
            }
        }
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

    bfs(g, visited, start);

    cout << endl << "Nodes visited starting by " << start << ": ";

    for(int i=0; i<visited.size(); i++)
        if(visited[i])
            cout << i << " ";

    return 0;
}