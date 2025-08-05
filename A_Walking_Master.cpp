#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    if((c-a) > (d-b) || d < b)
        return -1;

    return (2ll*(d-b) + (a - c));
}

int main() {
    ll t;
    cin >> t;
    while(t--)
        cout << solve() << "\n";
    return 0;
}