#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    ll h[n];
    for(auto& a : h)
        cin >> a;
    
    ll arr[n];

    auto possible = [&](ll x) {
        copy(h, h+n, arr);

        for(int i = n-1;i >= 0;i--) {
            if(arr[i] < x)
                return false;

            ll d = (arr[i] - x)/3;
            d = min(d, h[i]/3);
            arr[i] -= 3*d;
            
            if(i > 1)   arr[i-1] += d;
            if(i > 1)   arr[i-2] += 2*d;
        }
        return true;
    };

    ll lo = 1, hi = 1e9, ans = 0;
    while(lo <= hi) {
        ll mid = lo + (hi - lo)/2;
        if(possible(mid)) {
            ans = mid;
            lo = mid + 1;
        }
        else {
            hi = mid - 1;
        }
    }

    cout << ans << "\n";
}

int main() {
    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}