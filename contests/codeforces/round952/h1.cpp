#include<bits/stdc++.h>
using namespace std;

int dfs(vector<vector<int>> &matrix, int n, int m){

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t, n, m, v, c, lc;

    for(cin>>t; t>0; t--){
        lc = 0;

        cin >> n >> m;

        vector<vector<int>> matrix(n);
        vector<vector<int>> visited(n);

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> v;

                matrix[i].push_back(v);
                visited[i].push_back(false);
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                c = dfs(matrix, i, j);

                if(c > lc)
                    lc = c;
            }
        }

    }

    return 0;
}