#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x, y, z;
    long long k, quant=0;

    cin >> x >> y >> z >> k;

    for(long long a=1; a<=x; a++)
        for(long long b=1; b<=y; b++){
            long long c = k / (a*b);

            if(a*b*c == k && c <= z)
                quant = max(quant, (x-a+1) * (y-b+1) * (z-c+1));
        }

    cout << quant << "\n";
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