#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;

int main() {
    ll n, k;
    cin >> n >> k;

    vector<vector<ll>> dp(k+1, vector<ll>(n+1));

    for(ll i = 1;i <= n;i++)
        dp[k][i] = 1;
    
    for(ll idx = k-1;idx >= 0;idx--) {
        for(ll last = 1;last <= n;last++) {
            for(ll current = last;current <= n;current+=last)
                dp[idx][last] = (dp[idx][last] + dp[idx+1][current]) % MOD;
        }
    }

    cout << dp[0][1] << "\n";
}