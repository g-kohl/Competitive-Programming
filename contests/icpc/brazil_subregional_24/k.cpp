#include<bits/stdc++.h>
using namespace std;

bool equalPartition(vector<int>& a, vector<int>& alice, vector<int>& bob){
    int sum = accumulate(a.begin(), a.end(), 0);
    int n = a.size();

    if(sum % 2 != 0)
        return false;

    sum = sum / 2;
    vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, false));

    for(int i=0; i<=n; i++)
        dp[i][0] = true;

    for(int i=1; i<=n; i++){
        for (int j=1; j<=sum; j++) {
            if(j < a[i-1])
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = dp[i-1][j] || dp[i-1][j - a[i-1]];
        }
    }

    if(!dp[n][sum])
        return false;

    int i = n, j = sum;

    while(i > 0 && j > 0){
        if(dp[i][j] && !dp[i-1][j]){
            alice.push_back(a[i-1]);
            j -= a[i-1];
        }
        else{
            bob.push_back(a[i-1]);
        }

        i--;
    }

    while(i > 0){
        bob.push_back(a[i-1]);
        i--;
    }

    return true;
}

void split(vector<int>& alice, vector<int>& bob){
    int aliceSum=0, bobSum=0, aliceIt=0, bobIt=0;
    vector<int> caramels;
    
    while(aliceIt < alice.size() || bobIt < bob.size()){
        if(aliceIt < alice.size() && (bobIt >= bob.size() || aliceSum <= bobSum)){
            caramels.push_back(alice[aliceIt]);
            aliceSum += alice[aliceIt];
            aliceIt++;
        }
        else if(bobIt < bob.size()){
            caramels.push_back(bob[bobIt]);
            bobSum += bob[bobIt];
            bobIt++;
        }
    }

    for(int it : caramels)
        cout << it << " ";
}

void solve(){
    int n;

    cin >> n;

    vector<int> a(n), alice, bob;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    if(equalPartition(a, alice, bob)){
        split(alice, bob);
    }
    else{
        cout << -1;
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
