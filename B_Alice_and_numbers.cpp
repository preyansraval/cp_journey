#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while(t-- > 0) {
        ll a, b, c;
        cin >> a >> b >> c;

        ll m = (a + c)/2ll;

        ll val1 = abs(a+c - 2*(m));
        ll val2 = abs(a+c - 2*(m+1));

        cout << min(val1, val2) << "\n";
    }
    return 0;
}