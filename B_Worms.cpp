#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    vector<ll> piles(n);
    for(auto &pile : piles)
        cin >> pile;
    
    ll m;
    cin >> m;
    vector<ll> q(m);
    for(auto &i : q)
        cin >> i;
    
    vector<ll> prefix(n, 0);
    prefix[0] = piles[0];
    for(ll i = 1;i < n;i++)
        prefix[i] = prefix[i-1] + piles[i];
    
    for(ll i = 0;i < m;i++) {
        ll val = q[i];
        ll lo = 0, hi = n-1;
        ll ans = -1;
        while(lo <= hi) {
            ll mid = lo + (hi-lo)/2;
            if(prefix[mid] >= val) {
                ans = mid;
                hi = mid - 1;
            }
            else
                lo = mid + 1;
        }
        cout << (ans + 1) << "\n";
    }
    return 0;
}