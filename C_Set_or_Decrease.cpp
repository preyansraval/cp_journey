#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(vector<ll> a, ll sum, ll maxSum, ll ops) {
    if(sum - ops <= maxSum)   return true;

    for(int i = a.size() - 1;i >= max(1ll, (ll)a.size() - ops);i--) {
        sum -= a[i];
        ll opsLeft = ops - (a.size() - i);
        ll tempSum = sum - a[0] + (a.size() - i + 1)*(a[0]-opsLeft);
        if(tempSum <= maxSum)   return true;
    }
    return false;
}

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for(auto &a : arr)
        cin >> a;
    
    sort(arr.begin(), arr.end());

    ll lo = 0, hi = 1e10, ans = 1e10;
    ll sum = accumulate(arr.begin(), arr.end(), 0ll);
    while(lo <= hi) {
        ll mid = (lo + (hi-lo)/2);
        if(check(arr, sum, k, mid)) {
            ans = mid;
            hi = mid - 1;
        }
        else
            lo = mid + 1;
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