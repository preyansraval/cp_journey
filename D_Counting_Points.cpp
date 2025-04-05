#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(vector<ll> c, vector<ll> rad, int n, int m) {
    for(ll i = 0;i < n;i++) {
        
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while(t-- > 0) {
        int n, m;
        cin >> n >> m;
        vector<ll> c(n);
        vector<ll> rad(n);
        for(auto & i : c)
            cin >> i;
        for(auto& i : rad)
            cin >> i;
        
        solve(c, rad, n, m);
    }
    return 0;
}