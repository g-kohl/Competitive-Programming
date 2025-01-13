#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long t, x, y, z, k, a, b, c, quant;

    for(cin>>t; t>0; t--){
        cin >> x >> y >> z >> k;

        quant = 0;

        for(a=1; a<=x; a++){
            for(b=1; b<=y; b++){
                if(k % (a*b) == 0 && k/(a*b) <= z){
                    c = k/(a*b);

                    quant = max(quant, (x-a+1)*(y-b+1)*(z-c+1));
                }
            }
        }

        cout << quant << "\n";
    }

    return 0;
}