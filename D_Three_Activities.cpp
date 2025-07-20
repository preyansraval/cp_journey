#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> getMaxArr(vector<ll> v) {
    int n = v.size();
    vector<pair<ll, ll>> arr(n);
    for(int i = 0;i < n;i++)
        arr[i].first = v[i], arr[i].second = i;
    
    sort(arr.rbegin(), arr.rend());

    vector<ll> ans(3);
    for(int i = 0;i < 3;i++)
        ans[i] = arr[i].second;
    return ans;
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n), b(n), c(n);
    for(int i = 0;i < n;i++)    cin >> a[i];
    for(int i = 0;i < n;i++)    cin >> b[i];
    for(int i = 0;i < n;i++)    cin >> c[i];

    vector<ll> maxa = getMaxArr(a);
    vector<ll> maxb = getMaxArr(b);
    vector<ll> maxc = getMaxArr(c);

    ll ans = LLONG_MIN;

    for(int i = 0;i < 3;i++) {
        for(int j = 0;j < 3;j++) {
            for(int k = 0;k < 3;k++) {
                ll x = maxa[i], y = maxb[j], z = maxc[k];

                if(x == y || y == z || x == z)  continue;

                ans = max(ans, a[x] + b[y] + c[z]);
            }
        }
    }
    cout << ans << "\n";
}

int main() {
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}