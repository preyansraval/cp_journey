#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool canMake(ll val, ll limit) {
    ll count = 0;
    for(int i = 1;i <= limit;i++) {
        count += i;
        if(count > val)
            return false;
    }
    return true;
}

void solve(ll val) {
    ll lo = 0, hi = val;
    ll ans = 0;
    while(lo <= hi) {
        ll mid = lo + (hi-lo)/2;
        if(canMake(val, mid)) {
            ans = mid;
            lo = mid + 1;
        }
        else
            hi = mid - 1;
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while(t-- > 0) {
        ll w, b;
        cin >> w >> b;

        solve(w+b);
    }
    return 0;
}