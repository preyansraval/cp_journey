#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(ll n, ll a[], ll b[]) {
    vector<ll> pre(n+1, 0);

    for(ll i = 0;i < n;i++) {
        if(a[i] < b[i]) {
            ll diff = b[i] - a[i];
            a[i] += diff;
            if(i == 0) {
                ll li = i+1;
                ll ri = n-1;
                pre[li] -= diff;
                pre[ri+1] += diff;
            }
            else if(i == n-1) {
                ll li = 0;
                ll ri = i-1;
                pre[li] -= diff;
                pre[ri+1] += diff;
            }
            else {
                ll li = 0;
                ll ri = i-1;
                pre[li] -= diff;
                pre[ri+1] += diff;
                li = i+1;
                ri = n-1;
                pre[li] -= diff;
                pre[ri+1] += diff;
            }
        }
    }

    for(ll i = 1;i <= n;i++) {
        pre[i] += pre[i-1];
    }

    bool flag = true;
    for(ll i = 0;i < n;i++) {
        a[i] += pre[i];
        if(a[i] < b[i]) {
            flag = false;
            break;
        }
    }

    if(flag)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";
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
        ll a[n];
        for(ll i = 0;i < n;i++)
            cin >> a[i];
        ll b[n];
        for(ll i = 0;i < n;i++) {
            cin >> b[i];
        }

        solve(n, a, b);
    }
    return 0;
}