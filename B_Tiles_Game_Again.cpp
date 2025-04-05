#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(vector<ll> v, ll n) {
    ll maxVal = 0;
    ll curr = 0;
    for(ll i = 0;i < n;i++) {
        if(v[i] == 0)
            curr++;
        else {
            maxVal = max(maxVal, curr);
            curr = 0;
        }
    }

    maxVal = max(maxVal, curr);
    cout << maxVal << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while(t-- > 0) {
        ll n;
        cin >> n;
        vector<ll> v(n, 0);
        for(auto& i : v)
            cin >> i;

        solve(v, n);
    }
    return 0;
}