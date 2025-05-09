#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;

int main() {
    ll n, x;
    cin >> n >> x;
    vector<ll> coins(n);
    for(auto &coin : coins)
        cin >> coin;
    
    vector<ll> dp(x+1, 0);
    dp[0] = 1;

    for(ll i = 0;i < n;i++) {
        for(ll j = 1;j <= x;j++) {
            if(j >= coins[i])
                dp[j] += dp[j - coins[i]] % MOD;
        }
    }

    cout << dp[x] % MOD;
}