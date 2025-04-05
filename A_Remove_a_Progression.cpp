#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n, x;
        cin >> n >> x;
        ll a = 2;
        ll d = 2;
        ll ans = a + (x-1)*d;
        cout << ans << "\n";
    }
}