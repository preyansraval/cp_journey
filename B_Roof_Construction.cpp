#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;

    ll msb = log2(n-1);
    ll num = pow(2, msb) - 1;
    while(num >= 0)
        cout << num-- << " ";
    
    num = pow(2, msb);
    while(num <= n-1)
        cout << num++ << " ";
    cout << "\n";
}

int main() {
    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}