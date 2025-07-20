#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<int> prefix(n, 0);
    prefix[0] = (s[0] == 'W');
    for(int i = 1;i < n;i++) {
        prefix[i] = prefix[i-1] + (s[i] == 'W');
    }

    int ans = INT_MAX;
    for(int i = 0;i + k - 1 < n;i++) {
        int cnt = (i == 0 ? prefix[i+k-1] : prefix[i+k-1] - prefix[i-1]);
        ans = min(ans, cnt);
    }
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}