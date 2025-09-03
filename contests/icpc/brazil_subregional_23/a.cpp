#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, h, limit, rides=0;

    cin >> n >> h;

    for(int i=0; i<n; i++){
        cin >> limit;

        if(h >= limit)
            rides++;
    }

    cout << rides;
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