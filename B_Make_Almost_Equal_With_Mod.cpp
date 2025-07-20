#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for(auto &i : a)
            cin >> i;
        ll ans = 0;

        for(ll k = 1;k <= 60;k++) {
            ll val = (1ll << k);
            set<ll> freq;
            for(int i = 0;i < n;i++) {
                ll bit = (a[i] % val);
                freq.insert(bit);
            }
            if(freq.size() == 2) {
                ans = val;
                break;
            }
        }
        cout << ans <<"\n";
    }
    return 0;
}