#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(auto &i : v)
        cin >> i;

    vector<ll> prefix(n, 0);
    prefix[0] = v[0];
    for(int i = 1;i < n;i++)
        prefix[i] = prefix[i-1] + v[i];
    
    ll maxDiff = LLONG_MIN;
    for(ll k = 1;k < n;k++) {
        ll minLoad = LLONG_MAX, maxLoad = LLONG_MIN;
        if(n % k == 0) {
            for(ll i = 0;i + k - 1 < n;i+=k) {
                ll load = (i == 0 ? prefix[i+k-1] : prefix[i+k-1] - prefix[i-1]);
                maxLoad = max(maxLoad, load);
                minLoad = min(minLoad, load);
            }
            //cout << "For n = " << n << " and k = " << k << " maxLoad = " << maxLoad << " and minLoad = " << minLoad << "\n";
            if(maxLoad != LLONG_MIN && minLoad != LLONG_MAX)
                maxDiff = max(maxDiff, abs(maxLoad - minLoad));
            //cout << "maxDiff = " << maxDiff << "\n";
        }
    }
    cout << max(maxDiff, 0ll) << "\n";
}

int main() {
    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}