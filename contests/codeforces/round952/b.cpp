#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;

    cin >> n;

    if(n == 3)
        cout << "3\n";
    else
        cout << "2\n";
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