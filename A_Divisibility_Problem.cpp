#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll a, b;
        cin >> a >> b;
        ll rem = a % b;
        ll ans = rem == 0 ? rem : b - rem;
        cout << ans << "\n";
    }
}