#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;

int main() {
    ll n, x;
    cin >> n >> x;
    vector<ll> coins(n);
    for(auto &coin : coins)
        cin >> coin;
    
    //sort(coins.begin(), coins.end());
    vector<ll> dp(x+1, 0);
    dp[0] = 1;

    for(ll i = 1;i <= x;i++) {
        for(ll j = 0;j < n;j++) {
            ll idx = i - coins[j];
            if(coins[j] <= i)
                dp[i] = (dp[i]+dp[i-coins[j]]) % MOD;
        }
    }

    cout << dp[x] << "\n";
    return 0;
}