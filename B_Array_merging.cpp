#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);

    for(auto &i : a)
        cin >> i;
    
    for(auto &i : b)
        cin >> i;
    
    vector<ll> amap(2*n + 1, 0ll), bmap(2*n + 1, 0ll);

    ll acnt = 1, bcnt = 1;
    for(ll i = 1;i < n;i++) {
        if(a[i] == a[i-1])
            acnt++;
        else {
            amap[a[i-1]] = max(amap[a[i-1]], acnt);
            acnt = 1;
        }

        if(b[i] == b[i-1])
            bcnt++;
        else {
            bmap[b[i-1]] = max(bmap[b[i-1]], bcnt);
            bcnt = 1;
        }
    }
    amap[a[n-1]] = max(amap[a[n-1]], acnt);
    bmap[b[n-1]] = max(bmap[b[n-1]], bcnt);

    ll maxVal = -1;
    for(ll i = 1;i <= 2*n;i++) {
        maxVal = max(maxVal, amap[i] + bmap[i]);
    }

    cout << maxVal << "\n";
}

int main() {
    ll t;
    cin >> t;
    while(t--)
        solve();
}