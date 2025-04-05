#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    while(t--) {
        int n;
        cin >> n;
        ll a[n];
        for(ll i = 0;i < n;i++) {
            cin >> a[i];
        }

        ll ans = 0ll;
        for(ll i = 0;i < n;i++) {
            ans = ans + (a[i] - n + 2ll*i + 1);
        }
        cout << ans << "\n";
    }
}