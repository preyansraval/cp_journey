#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool checker(ll x) {
    ll num = x;
    while(x != 0) {
        ll rem = x % 10;
        x /= 10;
        if(rem  > 0 && num % rem != 0)
            return false;
    }
    return true;
}

ll solve() {
    ll n;
    cin >> n;

    for(ll x = n;x <= 1e18;x++) {
        if(checker(x))
            return x;
    }
    return -1;
}

int main() {
    ll t;
    cin >> t;
    while(t--)
        cout << solve() << "\n";
    return 0;
}