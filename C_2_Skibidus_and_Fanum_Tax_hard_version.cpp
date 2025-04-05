#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(vector<ll> a, vector<ll> b, int n, int m) {
    const ll INF = 1ll << 60;
    ll curr = -(1ll << 60);
    bool flag = true;

    for(int i = 0;i < n;i++) {
        ll p1 = INF;
        if(a[i] >= curr)
            p1 = a[i];
        
        ll target = curr + a[i];
        ll p2 = INF;
        auto it = lower_bound(b.begin(), b.end(), target);
        if(it != b.end()) {
            p2 = (*it) - a[i];
        }

        ll choose = min(p1, p2);
        if(choose == INF) {
            flag = false;
            break;
        }
        curr = choose;
    }

    if(flag)    cout << "YES" << "\n";
    else    cout << "NO" << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t-- > 0) {
        int n,m;
        cin >> n >> m;

        vector<ll> a(n);
        vector<ll> b(m);
        
        for(auto& i : a)
            cin >> i;
        
        for(auto& i : b)
            cin >> i;
        
        sort(b.begin(), b.end());

        solve(a, b, n, m);
    }
}