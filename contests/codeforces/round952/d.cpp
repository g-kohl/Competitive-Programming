#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    pair<int, int> top{-1,0}, bottom;

    cin >> n >> m;

    char matrix[n][m];

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++){
            cin >> matrix[i][j];

            if(matrix[i][j] == '#' && top.first == -1)
                top = {i,j};
        }

    for(int i=top.first; i<n; i++){
        if(matrix[i][top.second] == '.'){
            bottom = {i-1, top.second};

            break;
        }

        if(i == n-1)
            bottom = {i, top.second};
    }

    cout << (top.first + bottom.first)/2 + 1 << " " << (top.second + bottom.second)/2 + 1 << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t=1;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}