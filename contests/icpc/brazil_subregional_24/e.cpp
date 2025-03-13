#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;

    cin >> n;

    int m[n][n];

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin >> m[i][j];

    if(m[0][1] > m[0][0] && m[1][0] > m[0][0])
        cout << 0;
    else if(m[0][1] < m[0][0] && m[1][0] > m[0][0])
        cout << 1;
    else if(m[0][1] < m[0][0] && m[1][0] < m[0][0])
        cout << 2;
    else
        cout << 3;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t=1;
    // cin >> t;

    while(t--){
        solve();
    }

    return 0;
}