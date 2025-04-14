#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n, q;
        cin >> n >> q;

        vector<ll> a(n+1);
        a[0] = 0;
        for(int i = 1;i <= n;i++)
            cin >> a[i];
        
        vector<ll> prefix(n+1);

        prefix[1] = a[1];
        for(int i = 2;i <= n;i++)
            prefix[i] = prefix[i-1] + a[i];
        
        while(q--) {
            ll l, r, k;
            cin >> l >> r >> k;

            ll sum0 = prefix[l-1];
            ll sum1 = (r-l+1)*k;
            ll sum2 = prefix[n] - prefix[r];

            if((sum0 + sum1 + sum2) % 2 != 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}