#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, number, bits[32] = {0};

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> number;

        for(int e=0; e<32; e++){
            if(number / pow(2,31-e) >= 1){
                bits[e]++;
                number -= pow(2,31-e);
            }
        }
    }

    for(int i=0; i<n; i++){
        number = 0;

        for(int e=0; e<32; e++){
            if(bits[e] > 0){
                number += pow(2,31-e);
                bits[e]--;
            }
        }

        cout << number << " ";
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