#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(auto &i : a) {
        cin >> i;
        i = abs(i);
    }

    sort(a.begin(), a.end());
    ll count = 0ll;
    for(ll i = 0;i < n;i++) {
        ll r = upper_bound(a.begin(), a.end(), 2*a[i]) - a.begin();
        count += r-1-i;
    }
    cout << count << "\n";
}