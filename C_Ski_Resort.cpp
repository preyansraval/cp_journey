#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> v(n);
    for(auto &i : v)
        cin >> i;
    
    ll i = 0, count = 0ll;
    while(i < n) {
        if(v[i] <= q) {
            ll j = i;
            while(j < n && v[j] <= q)
                j++;
            ll size = (j-i) - k + 1;
            if(size > 0)
                count += ((size*(size+1))/2);
            i = j;
        }
        else {
            i++;
        }
    }
    cout << count << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}