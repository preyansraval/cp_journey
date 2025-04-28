#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(vector<ll> x, ll n, ll c, ll maxDist) {
    ll cowsPlaced = 1;
    ll lastPlace = x[0];
    for(ll i = 1;i < n;i++) {
        if(x[i] - lastPlace >= maxDist) {
            cowsPlaced++;
            lastPlace = x[i];
        }
    }
    return cowsPlaced >= c;
}

ll solve() {
    ll n, c;
    cin >> n >> c;
    vector<ll> x(n);
    for(auto &i : x)
        cin >> i;
    
    sort(x.begin(), x.end());
    ll ans = -1;
    ll lo = x[1] - x[0], hi = x[n-1] - x[0];
    while(lo <= hi) {
        ll mid = lo + (hi - lo)/2;
        if(check(x, n, c, mid)) {
            ans = mid;
            lo = mid + 1;
        }
        else
            hi = mid - 1;
    }
    return ans;
}

int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll ans = solve();
        cout << ans << "\n";
    }
}