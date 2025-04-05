#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int n, vector<vector<int>>& v) {
    int time = 0;
    for(int i = 0;i < n;i++) {
        time = max(time, v[i][0]);

        if(time <= v[i][1])
            cout << time++ << " ";
        else
            cout << 0 << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while(t-- > 0) {
        int n;
        cin >> n;
        vector<vector<int>> v(n, vector<int>(2, 0));
        for(int i = 0;i < n;i++) {
            cin >> v[i][0] >> v[i][1];
        }

        solve(n, v);
    }
    return 0;
}