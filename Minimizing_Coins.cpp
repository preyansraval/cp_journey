#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, x;
    cin >> n >> x;
    vector<ll> coins(n);
    for(auto &coin : coins)
        cin >> coin;
    
    vector<ll> dp(x+1, INT_MAX);
    dp[0] = 0;
    for(ll i = 1;i <= x;i++) {
        for(ll j = 0;j < n;j++) {
            if(i < coins[j])
                continue;
            else {
                dp[i] = min(dp[i], dp[i-coins[j]]);
            }
        }
        dp[i]++;
    }
    cout << (dp[x] >= INT_MAX ? -1 : dp[x]) << "\n";
}