#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        
        vector<ll> a(n);
        for(auto &i : a)
            cin >> i;
        map<ll, ll> m;
        for(ll i = 0;i < n;i++) {
            m[a[i]-i]++;
        }

        ll count = 0;
        for(auto &i : m) {
            ll num = i.second;
            if(num > 1) {
                count += (num*(num-1))/2ll;
            }
        }

        cout << count << "\n";
    }
    return 0;
}