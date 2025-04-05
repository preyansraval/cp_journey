#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(vector<ll> v, ll n, ll f, ll k) {
    ll fav = v[f-1];
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    bool yes = false, no = false;
    for(ll i = 0;i < k;i++) {
        if(v[i] == fav) {
            yes = true;
            break;
        }
    }

    for(ll i = k;i < n;i++) {
        if(v[i] == fav) {
            no  = true;
            break;
        }
    }

    if(yes && no)
        cout << "MAYBE" << "\n";
    else if(yes)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while(t-- > 0) {
        ll n, f, k;
        cin >> n >> f >> k;
        vector<ll> v(n, 0);
        for(auto& i : v)
            cin >> i;
        
        solve(v, n, f, k);
    }
    return 0;
}