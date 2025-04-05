#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while(t-- > 0) {
        ll n, m;
        cin >> n >> m;
        ll arr[n][2];
        for(ll i = 0;i < n;i++) {
            cin >> arr[i][0] >> arr[i][1];
        }

        ll ix = arr[0][0];
        ll iy = arr[0][1];
        ll lx = ix, ly = iy;
        for(ll i = 1;i < n;i++) {
            lx += arr[i][0];
            ly += arr[i][1];
        }

        ll fx = lx + m - ix;
        ll fy = ly + m - iy;

        ll ans = (2*fx) + (2*fy);
        cout << ans << "\n";
    }
    return 0;
}