#include<bits/stdc++.h>
using namespace std;

void solve(){
    int d, c, r, a, total=0;

    cin >> d >> c >> r;

    int tiring[c];

    for(int i=0; i<c; i++)
        cin >> tiring[i];

    for(int i=0; i<r; i++){
        cin >> a;

        d += a;
        total++;
    }

    for(int i=0; i<c; i++){
        if(d - tiring[i] >= 0){
            d -= tiring[i];
            total++;
        }
        else
            break;
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