#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> a, int n) {
    int res = abs(a[1] - 1);
    for(int i = 2;i <= n;i++) {
        if(abs(a[i] - i) > 0)
            res = __gcd(res, abs(a[i] - i));
    }

    cout << res << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n+1);
        a[0] = 0;
        for(int i = 1;i <= n;i++)
            cin >> a[i];

        solve(a, n);
    }
    return 0;
}