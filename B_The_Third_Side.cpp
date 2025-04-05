#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(vector<ll> a , int n) {
    if(n == 1) {
        cout << a[0] << "\n";
        return;
    }

    ll ans = (a[0] + a[1] - 1ll);
    for(int i = 2;i < n;i++) {
        ans = (ans + a[i] - 1);
    }

    cout << ans << "\n";
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
        vector<ll> a(n);
        for(auto& i : a)
            cin >> i;
        
        solve(a, n);
    }
    return 0;
}