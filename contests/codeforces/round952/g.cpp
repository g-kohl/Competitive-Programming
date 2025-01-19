#include<bits/stdc++.h>
using namespace std;

#define M 1000000007

int computeResult(long long l, long long r){
    return ((((r % M) - (l % M)) % M) + M) % M;
}

long long pow_modulo(long long a, long long b){
    long long res = 1;
 
    a = a % M;
  
    if(a == 0)
        return 0;
 
    while(b > 0){ 
        if (b & 1) 
            res = (res * a) % M; 
 
        b = b >> 1;
        a = (a * a) % M; 
    } 

    return res; 
}

void solve(){
    long long l, r, k, total;

    cin >> l >> r >> k;

    if(k == 1){
        cout << computeResult(pow_modulo(10, l), pow_modulo(10, r)) << "\n";
    }
    else if(k == 2){
        cout << computeResult(pow_modulo(5, l), pow_modulo(5, r)) << "\n";
    }
    else if(k == 3){
        cout << computeResult(pow_modulo(4, l), pow_modulo(4, r)) << "\n";
    }
    else if(k == 4){
        cout << computeResult(pow_modulo(3, l), pow_modulo(3, r)) << "\n";
    }
    else if(k >= 5 && k <= 9){
        cout << computeResult(pow_modulo(2, l), pow_modulo(2, r)) << "\n";
    }
    else{
        cout << 0 << "\n";
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