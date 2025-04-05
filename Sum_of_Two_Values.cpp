#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(ll n, ll x, vector<ll> a) {
    map<ll, ll> m;
    for(int i = 0;i < n;i++) {
        if(!m.empty() && m.find(a[i]) != m.end()) {
            cout << m[a[i]]+1 << " " << i+1;
            return;
        }
        m[x-a[i]] = i;
    }
    cout << "IMPOSSIBLE";
}

int main() {
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);

    for(auto &i : a)
        cin >> i;
    
    solve(n, x, a);
    return 0;
}