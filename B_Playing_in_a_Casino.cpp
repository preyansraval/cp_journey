#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<ll>> v(n, vector<ll>(m, 0ll));
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++)
                cin >> v[i][j];
        }

        vector<vector<ll>> a(m, vector<ll>(n, 0ll));
        for(int i = 0;i < m;i++) {
            for(int j = 0;j < n;j++) {
                a[i][j] = v[j][i];
            }
        }

        for(int i = 0;i < m;i++) {
            sort(a[i].begin(), a[i].end());
        }

        ll ans = 0;
        for(int i = 0;i < m;i++) {
            for(int j = 0;j < n;j++) {
                ans += (2ll*j - n + 1ll) * a[i][j];
            }
        }

        cout << ans << "\n";
    }
    return 0;
}