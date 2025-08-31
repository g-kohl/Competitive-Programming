#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, q, v, x;
    vector<vector<int>> factors(1000001);

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> v;

        for(int it=2; it<v; it++){
            if(v % it == 0 && it != v){
                factors[v].push_back(it);
            }
        }

        if(factors[v].size() == 0 && v != 1){
            factors[v].push_back(v);
        }
    }

    cin >> q;

    for(int i=0; i<q; i++){
        int quant=0, factor;

        cin >> x;

        for(int i=n; i>=1; i--){
            for(int j=0; j<factors[x].size(); j++){
                factor = factors[x][j];

                if(count(factors[i].begin(), factors[i].end(), factor) > 0){
                    quant += 1;
                    break;
                }
            }
        }

        cout << pow(2,n-quant) << "\n";
    }
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