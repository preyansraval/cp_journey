#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;

        if(n < 4 || n % 2 != 0)
            cout << -1 << "\n";
        else
            cout << (n + 5)/6 << " " << n/4 << "\n";
    }
    return 0;
}