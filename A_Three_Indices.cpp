#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto& x : v)
        cin >> x;
    
    vector<int> prefixMin(n, -1), suffixMin(n, -1);
    prefixMin[0] = 0;
    suffixMin[n-1] = n-1;
    for(int i = 1;i < n;i++) {
        if(v[i] < v[prefixMin[i-1]])
            prefixMin[i] = i;
        else
            prefixMin[i] = prefixMin[i-1];
    }

    for(int i = n-2;i >= 0;i--) {
        suffixMin[i] = (v[i] < v[suffixMin[i+1]] ? i : suffixMin[i+1]);
    }

    for(int i = 0;i < n;i++) {
        if(prefixMin[i] != i && suffixMin[i] != i && prefixMin[i] != suffixMin[i]) {
            cout << "YES\n";
            cout << prefixMin[i]+1 << " " << i+1 << " " << suffixMin[i] + 1 << "\n";
            return;
        }
    }
    cout << "NO\n";
}

int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}