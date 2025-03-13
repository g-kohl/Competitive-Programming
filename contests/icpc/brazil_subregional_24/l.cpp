#include<bits/stdc++.h>
using namespace std;

int bits[32];

void countBits(int number){
    
}

void solve(){
    int n, number;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> number;

        countBits(number);
    } 

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