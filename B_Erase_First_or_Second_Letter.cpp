#include <bits/stdc++.h>
using namespace std;\

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 0;
    map<int, int> freq;
    for(int i = 0;i < n;i++) {
        freq[s[i]-'a']++;

        ans += freq.size();
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