#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(vector<ll> a, ll n) {
    sort(a.begin(), a.end());
    ll count = 1;
    ll idx = -1;
    for(int i = 0;i < n;i++) {
        if(a[i] <= i+1) {
            idx = i;
        }
    }

    count += (idx+1);
    cout << count << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while(t-- > 0) {
        ll n;
        cin >> n;
        vector<ll> a(n, 0);
        for(auto& i : a)
            cin >> i;
        
        solve(a, n);
    }
    return 0;
}