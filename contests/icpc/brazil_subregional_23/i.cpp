#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, count, total=0;
    vector<int> indexes;

    cin >> n;

    int b[n];

    for(int i=0; i<n; i++){
        cin >> b[i];

        if(b[i] == 1)
            indexes.push_back(i);
    }

    for(int i=0; i<n; i++){
        count = 0;

        for(int j=i; j<n; j++){
            if(b[j] == 1){
                count++;
            }

            if(count % 2 == 1){
                total++;
            }
        }
    }

    cout << total;
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