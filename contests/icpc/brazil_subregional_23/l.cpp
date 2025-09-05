#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    int k;
    bool print=true;

    cin >> s >> k;

    vector<string> table(k);

    for(int i=0; i<k; i++){
        for(int j=i; j<s.size(); j+=k){
            table[i].push_back(s[j]);
        }

        sort(table[i].begin(), table[i].end());
    }

    int i=0, j=0;

    while(print){
        while(i < k){
            if(table[i].size() <= j){
                print = false;
                break;
            }

            cout << table[i][j];

            i++;
        }

        i = 0;
        j++;
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