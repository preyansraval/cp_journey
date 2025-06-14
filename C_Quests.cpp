#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n), b(n);
    for(auto& ai : a)
        cin >> ai;
    
    for(auto& bi : b)
        cin >> bi;

    ll sum = 0, curr_max = 0;
    ll ans = 0;
    for(ll x = 0;x < min(n, k);x++) {
        sum += a[x];
        curr_max = max(curr_max, b[x]);
        ans = max(ans, sum + curr_max*(k-x-1));
        
    }

    cout << ans << "\n";
}

int main() {
    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}