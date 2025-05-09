#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;

ll helper(vector<vector<char>> grid, ll r, ll c, vector<vector<ll>> dp) {
    if(r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size() || grid[r][c] == '*')
        return 0;

    if(r == grid.size() - 1 && c == grid[0].size() - 1) {
        return 1;
    }

    if(dp[r][c] != -1)
        return dp[r][c];
    
    dp[r][c] = (helper(grid, r, c + 1, dp) % MOD + helper(grid, r+1, c, dp) % MOD) % MOD;
    return dp[r][c];
}

ll helperTabular(vector<vector<char>> grid, ll n) {
    vector<vector<ll>> dp(n, vector<ll>(n, 0));
    dp[n-1][n-1] = grid[n-1][n-1] == '*' ? 0 : 1;

    for(int i = n-1;i >= 0;i--) {
        for(int j = n-1;j >= 0;j--) {
            if(i == n-1 && j == n-1)
                continue;
            if(grid[i][j] == '*') {
                dp[i][j] = 0;
            }
            else {
                if(i + 1 < n)
                    dp[i][j] += dp[i+1][j] % MOD;
                if(j + 1 < n)
                    dp[i][j] += dp[i][j+1] % MOD;
            }
        }
    }

    return dp[0][0] % MOD;
}

int main() {
    ll n;
    cin >> n;
    vector<vector<char>> grid(n, vector<char>(n));
    vector<vector<ll>> dp(n, vector<ll>(n, -1));

    for(auto &v : grid) {
        for(auto &c : v)
            cin >> c;
    }

    if(grid[0][0] == '*' || grid[n-1][n-1] == '*') {
        cout << 0 << "\n";
        return 0;
    }

    ll paths = helperTabular(grid, n);

    cout << paths % MOD;
    return 0;
}