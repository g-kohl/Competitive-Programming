#include <bits/stdc++.h>
using namespace std;

#define SIZE 100

bool bipartite(vector<vector<int>> &g, vector<int> &subgraphs, int v){
    queue<int> q;
    int next;

    subgraphs[v] = 1;
    q.push(v);

    while(!q.empty()){
        next = q.front();
        q.pop();

        for(int it : g[next]){
            if(subgraphs[it] == 0){
                if(subgraphs[next] == 1)
                    subgraphs[it] = 2;
                else
                    subgraphs[it] = 1;

                q.push(it);
            }
            else if(subgraphs[it] == subgraphs[next])
                return false;
        }
    }

    return true;
}

int main(){
    vector<vector<int>> g(SIZE+1);
    vector<int> subgraphs(SIZE+1);
    int v, e, v1, v2;
    bool isBipartite = true;

    cin >> v >> e;

    for(int i=0; i<e; i++){
        cin >> v1 >> v2;

        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    for(int i=1; i<=v; i++)
        if(subgraphs[i] == 0 && !bipartite(g, subgraphs, i))
            isBipartite = false;

    if(!isBipartite)
        cout << "Graph isn't bipartite";
    else
        for(int i=1; i<=v; i++)
            cout << subgraphs[i] << " ";

    return 0;
}