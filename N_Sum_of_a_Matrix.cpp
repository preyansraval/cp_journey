#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> sum(vector<vector<int>> a, vector<vector<int>> b, vector<vector<int>>& ans, int r, int c) {
    if(r < 0)
        return ans;
    
    for(int i = 0;i < c;i++) {
        ans[r][i] = a[r][i] + b[r][i];
    }
    return sum(a, b, ans, r-1, c);
}

int main() {
    int r, c;
    cin >> r >> c;
    vector<vector<int>> a(r, vector<int>(c, 0));
    vector<vector<int>> b(r, vector<int>(c, 0));
    int t = r;
    for(auto& i : a) {
        for(auto& j : i) {
            cin >> j;
        }
    }

    for(auto& i : b) {
        for(auto& j : i) {
            cin >> j;
        }
    }
    vector<vector<int>> ans(r, vector<int>(c, 0));
    ans = sum(a, b, ans, r-1, c);

    for(int i = 0;i < r;i++) {
        for(int j = 0;j < c;j++) {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
}