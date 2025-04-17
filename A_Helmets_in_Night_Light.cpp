#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, p;
    cin >> n >> p;
    vector<ll> a(n), b(n);

    for(auto &i : a)
        cin >> i;
    
    for(auto &i : b)
        cin >> i;
    
    vector<pair<ll, ll>> v(n);

    for(ll i = 0;i < n;i++) {
        v[i] = {b[i], a[i]};
    }

    sort(v.begin(), v.end());

    ll already_shared = 1;
    ll cost_so_far = p;

    for(ll i = 0;i < n;i++) {
        ll current_cost = v[i].first;
        ll can_share_to = v[i].second;

        if(current_cost >= p) {
            cost_so_far += (n - already_shared) * p;
            already_shared = n;
            break;
        }

        if(already_shared + can_share_to > n) {
            cost_so_far += (n - already_shared) * current_cost;
            already_shared = n;
            break;
        }

        cost_so_far += can_share_to * current_cost;
        already_shared += can_share_to;
    }

    cout << cost_so_far << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}