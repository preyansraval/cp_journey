#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll sol(ll n) {
    if(n == 0)
        return 0;
    return n + sol(n/2);
}

int main() {
    int t;
    cin >> t;
    while(t-- > 0) {
        ll n;
        cin >> n;
        ll ans = sol(n);
        cout << ans << endl;
    }
    return 0;
}