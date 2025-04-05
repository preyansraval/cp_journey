#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    vector<ll> h(n);

    for(auto& i : h)
        cin >> i;

    vector<ll> prefix(n);

    prefix[0] = h[0];
    for(int i = 1;i < n;i++) {
        prefix[i] = prefix[i-1] + h[i];
    }

    int l = 0, r = k-1;
    ll minSum = LLONG_MAX;
    ll sum = 0ll;
    ll ans = -1;
    while(r < n) {
        sum = (l == 0 ? prefix[r] : prefix[r] - prefix[l-1]);
        if(sum < minSum) {
            minSum = sum;
            ans = l;
        }
        l++;
        r++;
    }
    cout << ans+1 << "\n";
    return 0;
}