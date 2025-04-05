#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int n, vector<ll> a) {
    int i = 0;
    while(i < n && a[i] == 0)    i++;

    if(i == n-1) {
        cout << 0 << endl;
        return;
    }

    ll ans = 0;
    for(int x = i;x < n-1;x++) {
        if(a[x] == 0)
            ans++;
        else
            ans = ans + a[x];
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while(t-- > 0) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for(auto & i : a) {
            cin >> i;
        }

        solve(n, a);
    }
}