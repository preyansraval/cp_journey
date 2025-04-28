#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    for(auto &i : a) {
        cin >> i;
    }

    for(auto &i : b)
        cin >> i;
    
    ll maxVala = LLONG_MIN, maxValb = -1;
    for(ll i = 0;i < n;i++) {
        maxVala = max(maxVala, a[i]);
        maxValb = max(maxValb, b[i]);
    }

    ll sum = -1;
    for(ll i = 0;i < n;i++) {
        if(b[i] == -1)  continue;

        if(sum == -1)
            sum = a[i] + b[i];
        else if(sum != a[i] + b[i])
            return 0ll;
    }

    if(maxValb != -1) {
        for(ll i = 0;i < n;i++) {
            if(b[i] != -1)  continue;

            ll rval = sum - a[i];
            if(rval > k || rval < 0)
                return 0;
        }
        return 1;
    }
    
    vector<ll> prefix(n, 0);
    for(int i = 1;i < n;i++) {
        prefix[i] = a[i] - a[i-1];
    }

    ll l = 0,r = LLONG_MAX;
    for(int i = 0;i < n;i++) {
        l = max(l, a[i]);
        r = min(r, a[i] + k);
    }

    return (r >= l ? r-l+1 : 0);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while(t-- > 0) {
        ll ans = solve();
        cout << ans << "\n";
    }
    return 0;
}