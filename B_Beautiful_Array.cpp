#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, k, b, s;
    cin >> n >> k >> b >> s;

    ll minVal = k*b, maxVal = (k*b) + n*(k-1ll);
    if(!(s >= minVal && s <= maxVal)) {
        cout << -1 << "\n";
        return;
    }
    
    vector<ll> res(n, 0);
    s = s - (k*b);
    res[0] = k*b;
    for(int i = 0;i < n;i++) {
        if(s - (k-1ll) >= 0ll) {
            res[i] += (k-1ll);
            s -= (k-1ll);
        }
        else {
            res[i] += s;
            break;
        }
    }

    for(auto r : res)
        cout << r << " ";
    cout << "\n";
}

int main() {
    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}