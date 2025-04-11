#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n+1);
        a[0] = 0;
        for(int i = 1;i <= n;i++)
            cin >> a[i];
        
        sort(a.begin(), a.end());

        ll prev = 0, val = 0;
        for(ll i = 1;i <= n;i++) {
            if(a[i] - a[i-1] > k) {
                val = max(val, i-1-prev);
                prev = i-1;
            }
        }

        val = max(val, n - prev);
        ll res = n - val;
        cout << res << "\n";
    }
}