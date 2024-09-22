#include<bits/stdc++.h>
using namespace std;

bool isSubsetSum(vector<int> &s, int n, int sum){
    if(sum == 0)
        return true;
    if(n == 0 && sum != 0)
        return false;

    if(s[n-1] > sum)
        return isSubsetSum(s, n-1, sum);

    return isSubsetSum(s, n-1, sum) || isSubsetSum(s, n-1, sum-s[n-1]);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, sum;

    cin >> n;

    vector<int> set(n);

    for(int i=0; i<n; i++)
        cin >> set[i];

    sum = accumulate(set.begin(), set.end(), 0);

    if(sum % 2 == 0){
        if(isSubsetSum(set, n, sum/2))
            cout << "TRUE";
        else
            cout << "FALSE";
    }
    else
        cout << "FALSE";

    return 0;
}