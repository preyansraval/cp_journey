#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    vector<vector<ll>> v(n, vector<ll>());
    for(int i = 1;i <= n;i++) {
        ll m;
        cin >> m;
        vector<ll> temp(m);
        for(auto &i : temp)
            cin >> i;
        v[i-1] = temp;
    }

    for(int i = 0;i < n;i++) {
        sort(v[i].begin(), v[i].end());
    }

    ll res = 0;
    bool isFirstTime = true;
    ll lowest_second_min = LLONG_MAX, lowest_min = LLONG_MAX;
    for(int i = 0;i < n;i++) {
        lowest_second_min = min(lowest_second_min, v[i][1]);
        lowest_min = min(lowest_min, v[i][0]);
    }
    
    for(int i = 0;i < n;i++) {
        if(v[i][1] == lowest_second_min && isFirstTime) {
            isFirstTime = false;
            continue;
        }
        res += v[i][1];
    }
    res += lowest_min;

    cout << res << "\n";
}

int main() {
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
}