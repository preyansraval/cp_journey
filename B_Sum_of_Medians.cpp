#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n*k);
    for(ll i = 0;i < n*k;i++)
        cin >> arr[i];
    
    ll total = n*k;
    ll x = (n + 1)/2 - 1;
    x = n - x;
    ll ans = 0;
    for(ll i = total - x;i >= 0 && k > 0;i = i-x) {
        k--;
        ans += arr[i];
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