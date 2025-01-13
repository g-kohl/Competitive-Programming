#include<bits/stdc++.h>
using namespace std;

#define M 1000000007

long long powerMod(long long b, long long e){
    long long power = 1;

    b = b % M;

    if(b == 0)
        return 0;

    while(e > 0){
        if(e % 2 == 1)
            power = (power*b) % M;

        e /= 2;
        b = (b*b) % M;
    }

    return power;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long t, l, r, n, k, total, expo;
    bool zero;

    for(cin>>t; t>0; t--){
        zero = false;

        cin >> l >> r >> k;

        switch(k){
            case 1:
                expo = 10;
                break;

            case 2:
                expo = 5;
                break;
            
            case 3:
                expo = 4;
                break;

            case 4:
                expo = 3;
                break;
            
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
                expo = 2;
                break;

            default:
                total = 0;
                zero = true;
        }

        if(!zero){
            l = powerMod(expo, l);
            r = powerMod(expo, r);

            total = ((((r%M) - (l%M)) % M) + M) % M;
        }

        cout << total << "\n";
    }

    return 0;
}