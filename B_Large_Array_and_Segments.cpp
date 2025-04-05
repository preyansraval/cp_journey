#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(ll n, ll k, ll x, vector<ll> v) {
    ll sum = accumulate(v.begin(), v.end(), 0ll);
    ll i = n-2;
    ll countOfArrays = x / sum;
    ll remainingSum = x % sum;
    
    if(sum * k < x) {
        cout << 0 << "\n";
        return;
    }
    if(remainingSum == 0) {
        remainingSum = sum;
        countOfArrays--;
    }
    ll ans = n*k - n*countOfArrays;
    ll tempSum = 0;
    for(ll i = n-1;i >= 0;i--) {
        tempSum += v[i];
        if(tempSum >= remainingSum)
            break;
        ans--;
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
        ll n, k, x;
        cin >> n >> k >> x;
        vector<ll> v(n);
        for(auto&i : v)
            cin >> i;

        solve(n, k, x, v);
    }
    return 0;
}