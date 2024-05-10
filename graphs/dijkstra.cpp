#include <bits/stdc++.h>

#define SIZE 100
#define INF 0x3f3f3f3f

using namespace std;

vector<int> dijkstra(vector<vector<pair<int, int>>> &g, int start){
    set<pair<int, int>> cloud;
    vector<int> distances(SIZE, INF);

    cloud.insert(make_pair(0, start));
    distances[start] = 0;

    while(!cloud.empty()){
        pair<int, int> v = *(cloud.begin());
        cloud.erase(cloud.begin());

        for(int i=0; i<g[v.second].size(); i++){
            if(distances[g[v.second][i].second] > distances[v.second] + g[v.second][i].first){
                if(distances[g[v.second][i].second] != INF)
                    cloud.erase(cloud.find(make_pair(distances[g[v.second][i].second], g[v.second][i].second)));

                distances[g[v.second][i].second] = distances[v.second] + g[v.second][i].first;
                cloud.insert(make_pair(distances[g[v.second][i].second], g[v.second][i].second));
            }
        }
    }

    return distances;
}

int main(){
    vector<vector<pair<int, int>>> g(SIZE+1);
    int v, e, v1, v2, w, start=0;

    cin >> v >> e;

    for(int i=0; i<e; i++){
        cin >> v1 >> v2 >> w;

        g[v1].push_back(make_pair(w, v2));
        g[v2].push_back(make_pair(w, v1));
    }

    vector<int> distances = dijkstra(g, start);

    cout << "Vertex and it's distance from the start:" << endl;
    for(int i=0; i<SIZE; i++)
        if(distances[i] != INF)
            cout << i << ": " << distances[i] << endl;

    return 0;
}
