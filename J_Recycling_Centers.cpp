#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

ll lcm(ll a, ll b) {
    return (a * b) / __gcd(a, b);
}

ll lcm3(ll a, ll b, ll c) {
    return lcm(lcm(a, b), c);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n, k;
        cin >> n >> k;

        ll a1 = n / 3;
        ll a2 = n / 3;
        ll a3 = n - a1 - a2;

        if (a1 == 0) a1 = 1;
        if (a2 == 0) a2 = 1;
        if (a3 == 0) a3 = 1;

        if (2 * lcm3(a1, a2, a3) > n) {

            if (a3 == 1) {
                a3 = 2;
                a2--;
            }
            else if (a2 == 1) {
                a2 = 2;
                a3--;
            }
            else {
                a1++;
                a2--;
            }
        }
        cout << a1 << " " << a2 << " " << a3 << endl;
    }

    return 0;
}
