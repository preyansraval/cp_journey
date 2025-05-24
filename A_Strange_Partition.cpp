#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for(auto& i : a)
        cin >> i;
    
    ll min = 0, max = 0, total = 0;
    for(auto num : a) {
        min += (num + x - 1)/x;
        total += num;
    }

    max = (total + x - 1)/x;
    cout << max << " " << min << "\n";
}

int main() {
    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}