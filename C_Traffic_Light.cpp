#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;

    int lastg = -1, ans = 0;
    for(int i = 2*n - 1;i >= 0;i--) {
        if(s[i%n] == 'g') {
            lastg = i;
        }
        else if(s[i%n] == c && lastg != -1) {
            ans = max(ans, lastg - i);
        }
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