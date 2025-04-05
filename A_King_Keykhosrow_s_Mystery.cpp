#include <bits/stdc++.h>
using namespace std;

void solve(int a, int b) {
    int res = a*b/__gcd(a, b);
    cout << res << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;

        solve(a, b);
    }
    return 0;
}