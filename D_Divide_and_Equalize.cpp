#include <bits/stdc++.h>
using namespace std;

void solve(int x, map<int, int>& m) {
    for(int i = 2;i*i <= x;i++) {
        int cnt = 0;
        while(x % i == 0) {
            x /= i;
            cnt++;
        }
        m[i] += cnt;
    }
    if(x > 1)
        m[x]++;
}

void solve0() {
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> m;
    for(auto& i : v) {
        cin >> i;
        solve(i, m);
    }

    for(auto i : m) {
        if(i.second % n != 0) {
            cout << "NO" << "\n";
            return;
        }
    }
    cout << "YES" << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve0();
    }
    return 0;
}