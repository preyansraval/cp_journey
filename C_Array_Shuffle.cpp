#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while(t-- > 0) {
        int n;
        cin >> n;
        vector<ll> v(n);
        for(auto& i : v)
            cin >> i;
        
        ll res = 0;
        for(ll i = 0;i < 32;i++) {
            int count = 0;
            for(ll j = 0;j < n;j++) {
                if ((v[j] & (1 << i)) != 0) {
                    count++;
                }
            }
            if(count == n) {
                res = res + (1 << i);
            }
        }
        cout << res << "\n";
    }
    return 0;
}