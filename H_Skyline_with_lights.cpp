#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool canBuild(vector<ll> v, ll h, ll x) {
    ll size = v.size();
    ll sum = 0ll;
    for(int i = 0;i < size;i++) {
        if(v[i] < h)
            sum += 1ll*(h-v[i]);
        if(sum > x)
            return false;
    }
    return true;
}

int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n, x;
        cin >> n >> x;
        vector<ll> v(n);
        for(auto& i : v)
            cin >> i;
        
        ll minVal = LLONG_MAX;
        for(int i = 0;i < n;i++) {
            minVal = min(minVal, v[i]);
        }
        ll ans = -1;
        ll lo = minVal, hi = x+minVal;
        while(lo <= hi) {
            int mid = lo + (hi - lo)/2;

            if(canBuild(v, mid, x)) {
                ans = mid;
                lo = mid+1;
            }
            else
                hi = mid-1;
        }
        cout << ans << "\n";
    }
    return 0;
}