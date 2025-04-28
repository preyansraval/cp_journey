#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isMedian(ll n, ll mid) {
    ll count = 0;
    for(ll i = 1;i <= n;i++) {
        count += min(n, mid/i);
    }
    return count >= ((n*n + 1)/2);
}

int main() {
    ll n;
    cin >> n;

    ll lo = 1, hi = n*n, ans = -1;
    while(lo <= hi) {
        ll mid = lo + (hi - lo)/2;
        if(isMedian(n, mid)) {
            ans = mid;
            hi = mid-1;
        }
        else
            lo = mid+1;
    }

    cout << ans << "\n";
}