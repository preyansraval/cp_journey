#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll a, b, n;
        cin >> a >> b >> n;

        vector<ll> v(n);
        for(auto &i : v)
            cin >> i;
        
        ll ans = b;
        for(ll x : v) {
            ans += min(a-1, x);
        }

        cout << ans << "\n";
    }
    return 0;
}