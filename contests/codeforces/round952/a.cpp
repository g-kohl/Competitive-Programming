#include<bits/stdc++.h>
using namespace std;

void solve(){
    string a, b;

    cin >> a >> b;

    swap(a[0], b[0]);

    cout << a << " " << b << "\n";
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