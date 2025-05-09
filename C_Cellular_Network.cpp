#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool checker(vector<ll> cities, vector<ll> towers, ll distance) {
    ll n = cities.size(), m = towers.size();
    for(ll i = 0;i < n;i++) {
        ll left = cities[i] - distance;
        ll right = cities[i] + distance;
        auto it = lower_bound(towers.begin(), towers.end(), left);
        if(it == towers.end() || (it != towers.end() && *it > right))
            return false;
    }
    return true;
}

int main() {
    ll n, m;
    cin >> n >> m;

    vector<ll> cities(n), towers(m);

    for(auto &city : cities)
        cin >> city;
    
    for(auto &tower : towers)
        cin >> tower;
    
    
    ll lo = 0, hi = 2e9;
    ll ans = -1;
    while(lo <= hi) {
        ll mid = lo + (hi - lo)/2;
        if(checker(cities, towers, mid)) {
            ans = mid;
            hi = mid - 1;
        }
        else
            lo = mid + 1;
    }
    cout << ans << "\n";
}