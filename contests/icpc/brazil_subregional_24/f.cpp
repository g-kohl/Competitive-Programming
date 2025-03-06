#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n == 0 || n == 1)
        return 1;

    return fibonacci(n-2) + fibonacci(n-1);
}

void solve(){
    int n;

    cin >> n;

    cout << fibonacci(n);
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