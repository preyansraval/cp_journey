#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for(auto &i : a)
            cin >> i;
        
        int res = INT_MIN;
        for(int i = 0;i < n;i++) {
            res = max(res, a[(i-1 + n)%n] - a[i]);
        }

        for(int i = 0;i < n-1;i++) {
            res = max(res, a[n-1] - a[i]);
        }

        for(int i = 1;i < n;i++) {
            res = max(res, a[i] - a[0]);
        }

        cout << res << "\n";
    }
    return 0;
}