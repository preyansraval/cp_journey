#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll search(vector<ll>& a, ll val) {
    ll lo = 0, hi = a.size()-1;
    ll ans = -1;
    while(lo <= hi) {
        int mid = lo + (hi - lo)/2;
        if(a[mid] <= val) {
            ans = mid;
            lo = mid + 1;
        }
        else
            hi = mid - 1;
    }
    return ans;
}

int main() {
    ll n;
    cin >> n;

    vector<ll> a(n, 0);
    for(auto& i : a)
        cin >> i;

    sort(a.begin(), a.end());

    ll k;
    cin >> k;
    while(k--) {
        ll l, r;
        cin >> l >> r;

        ll idx0 = search(a, l-1);
        ll idx1 = search(a, r);

        cout << idx1 - idx0 << " ";
    }
    return 0;
}