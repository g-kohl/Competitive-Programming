#include<bits/stdc++.h>
using namespace std;

bool canKill(vector<int> &a, vector<int> &c, long long turn, int h, int n){
    long long damage=0;

    for(int i=0; i<n; i++)
        damage += (turn/c[i]) * a[i];

    return (damage >= h) ? true : false;
}

void solve(){
    int n;
    long long h, turns, l=1, r=40000000000, mid;

    cin >> h >> n;

    vector<int> a(n), c(n);

    for(int i=0; i<n; i++){
        cin >> a[i];

        h -= a[i];
    }

    for(int i=0; i<n; i++)
        cin >> c[i];

    if(h <= 0)
        cout << "1\n";
    else{
        while(l <= r){
            mid = l + (r - l) / 2;

            if(canKill(a, c, mid, h, n) && !canKill(a, c, mid-1, h, n)){
                turns = mid;
                break;
            }
            else if(canKill(a, c, mid, h, n) && canKill(a, c, mid-1, h, n))
                r = mid - 1;
            else
                l = mid + 1;
        }

        cout << turns+1 << "\n";
    }
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