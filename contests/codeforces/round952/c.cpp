#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, a, largest=0, counter=0;
    long long sum=0;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a;

        if(a > largest)
            largest = a;

        sum += a;

        if(sum - largest == largest)
            counter ++;
    }

    cout << counter << "\n";
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