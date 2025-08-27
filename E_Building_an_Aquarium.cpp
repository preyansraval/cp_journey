#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool checker(vector<ll> arr, ll h, ll x) {
    ll water = 0;
    for(ll a : arr) {
        water += max(0ll, h - a);
    }
    return water <= x;
}

void solve() {
    ll n, x;
    cin >> n >> x;
    vector<ll> arr(n);
    for(auto &a : arr)
        cin >> a;
    
    ll lo = 1, hi = 1e10, ans = -1;
    while(lo <= hi) {
        ll mid = lo + (hi - lo)/2;
        if(checker(arr, mid, x)) {
            ans = mid;
            lo = mid + 1;
        }
        else
            hi = mid - 1;
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