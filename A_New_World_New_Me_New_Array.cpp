#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k, p;
        cin >> n>> k >> p;

        if(k < -n*p || k > n*p) {
            cout << -1 << "\n";
        }
        else {
            k = abs(k);
            int val = (k+p-1)/p;
            cout << min(val, n) << "\n";
        }
    }
    return 0;
}