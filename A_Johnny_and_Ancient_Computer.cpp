#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve(ll a, ll b) {
    if(a == b)
        return 0ll;
    
    if(a != 1 && b % a != 0)
        return -1;

    ll count = 0ll;
    while(a*8ll <= b) {
        a *= 8ll;
        count++;
    }

    while(a * 4ll <= b) {
        a *= 4ll;
        count++;
    }

    while(a * 2ll <= b) {
        a *= 2ll;
        count++;
    }
    return a != b ? -1 : count;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll a, b;
        cin >> a >> b;
        cout << solve(min(a, b), max(a, b)) << "\n";
    }
    return 0;
}