#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, k;
    cin >> n >> k;

    for(int i = 0;i < 2;i++) {
        if(n - k*i == 0 || (n-k*i)%2 == 0) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}