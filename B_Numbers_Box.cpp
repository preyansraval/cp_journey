#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    int minVal = INT_MAX;
    vector<vector<int>> mat(n, vector<int>(m, 0));
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < m;j++) {
            cin >>  mat[i][j];
            minVal = min(minVal, abs(mat[i][j]));
        }
    }

    int neg = 0;
    bool flag = false;
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < m;j++) {
            if(mat[i][j] < 0)
                neg++;
            else if(mat[i][j] == 0)
                flag = true;
        }
    }
    int res = 0, count = 0;
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < m;j++) {
            res += abs(mat[i][j]);
        }
    }
    if(!(neg % 2 == 0 || (flag && neg % 2 != 0)))
        res -= 2*minVal;
    cout << res << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}