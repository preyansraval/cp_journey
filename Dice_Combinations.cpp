#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
void solve(ll n) {
    vector<ll> vals = {1, 2, 3, 4, 5, 6};

    vector<ll> dp(n+1, 0);
    dp[0] = 1;
    for(ll i = 1;i <= n;i++) {
        for(ll j = 1;j <= 6;j++) {
            ll idx = i - j;
            if(idx < 0)
                break;
           dp[i] += (dp[idx] % MOD);
        }
    }

    cout << dp[n] % MOD << "\n";
}

int main() {
    ll n;
    cin >> n;

    solve(n);
    return 0;
}