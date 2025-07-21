#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i : a)    cin >> i;

    vector<int> prevDiff(n, -1);
    int prev = -1;
    for(int i = 1;i < n;i++) {
        if(a[i] != a[i-1])  prev = i-1;
        prevDiff[i] = prev;
    }

    int q;
    cin >> q;
    while(q--) {
        int l, r;
        cin >> l >> r;
        if(prevDiff[r-1] >= l-1)    cout << r << " " << prevDiff[r-1] + 1 << "\n";
        else cout << -1 << " " << -1 << "\n";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}