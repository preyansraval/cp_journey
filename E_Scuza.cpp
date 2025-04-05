#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n, q;
    cin >> n >> q;
    vector<ll> preSum;
    vector<ll> preMax;
    preSum.push_back(0);
    for(int i = 0;i < n;i++) {
        ll x;
        cin >> x;
        preSum.push_back(preSum.back() + x);
        if(i == 0)
            preMax.push_back(x);
        else
            preMax.push_back(max(preMax.back(), x));
    }

    for(int i = 0;i < q;i++) {
        ll x;
        cin >> x;
        int idx = upper_bound(preMax.begin(), preMax.end(), x) - preMax.begin();
        cout << preSum[idx] << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}