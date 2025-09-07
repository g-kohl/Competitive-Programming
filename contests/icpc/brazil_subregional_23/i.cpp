#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, b, count_even=1, count_odd=0, total=0;
    bool parity;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> b;

        if(i == 0)
            parity = (b == 0) ? true : false;
        else
            parity = (b == 0) ? parity : !parity;

        if(parity){
            count_even++;
            total += count_odd;
        }
        else{
            count_odd++;
            total+= count_even;
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