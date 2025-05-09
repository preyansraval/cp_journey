#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string s, t;
    cin >> s;
    cin >> t;

    ll n = s.length(), m = t.length();
    vector<vector<ll>> dp(n+1, vector<ll>(m+1, LLONG_MAX));

    s = "#" + s;
    t = "#" + t;

    for(ll i = 0;i <= n;i++)
        dp[i][0] = i;
    
    for(ll j = 0;j <= m;j++)
        dp[0][j] = j;
    
    for(ll i = 1;i <= n;i++) {
        for(ll j = 1;j <= m;j++) {
            if(s[i] == t[j]) {
                dp[i][j] = dp[i-1][j-1];
            }
            else {
                dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1])) + 1;
            }
        }
    }

    cout << dp[n][m];
}