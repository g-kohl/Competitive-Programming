#include<bits/stdc++.h>
using namespace std;

bool checker(long long turns, vector<long long> &a, vector<long long> &c, long long h, long long n){
    long long damage=0;

    for(int i=0; i<n; i++)
        damage += (turns/c[i]) * a[i];

    if(damage >= h)
        return true;

    return false;   
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long t, h, n, turns, l, r, mid;
    bool check;

    for(cin>>t; t>0; t--){
        turns = 0;
        l = 1;
        r = 40000000000;

        cin >> h >> n;

        vector<long long> a(n), c(n);

        for(int i=0; i<n; i++)
            cin >> a[i];

        for(int i=0; i<n; i++)
            cin >> c[i];

        for(int i=0; i<n; i++)
            h -= a[i];

        if(h <= 0)
            cout << "1\n";
        else{    
            while(l <= r){
                mid = (l+r)/2;

                check = checker(mid, a, c, h, n);

                if(check){
                    r = mid - 1;
                    turns = mid;
                }
                else
                    l = mid + 1;
            }

            cout << turns+1 << "\n";
        }

        a.clear();
        c.clear();
    }

    return 0;
}