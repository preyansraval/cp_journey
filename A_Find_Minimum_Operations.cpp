#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll largestPowerOfk(ll x, ll k) {
    ll ans = 1;
    while(ans * k <= x)
        ans *= k;
    return ans;
}

int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll x, k;
        cin >> x >> k;

        if(k == 1) {
            cout << x << "\n";
            continue;
        }
        ll ans = 0;
        while(x >= k) {
            x -= largestPowerOfk(x, k);
            ans++;
        }
        cout << ans + x << "\n";
    }
    return 0;
}