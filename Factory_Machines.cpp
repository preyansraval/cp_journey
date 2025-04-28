#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPossibleToMakeProducts(vector<ll> a, ll t, ll time) {
    ll products = 0, n = a.size();
    for(ll i = 0;i < n;i++) {
        products += (time / a[i]);
        if(products >= t)
            return true;
    }
    return false;
}

int main() {
    ll n, t;
    cin >> n >> t;
    vector<ll> a(n);
    for(auto &i : a)
        cin >> i;
    
    ll maxVal = *max_element(a.begin(), a.end());
    ll lo = 1, hi = maxVal * t, ans = -1;
    while(lo <= hi) {
        ll mid = lo + (hi - lo)/2;
        if(isPossibleToMakeProducts(a, t, mid)) {
            ans = mid;
            hi = mid - 1;
        }
        else
            lo = mid + 1;
    }

    cout << ans << "\n";
}