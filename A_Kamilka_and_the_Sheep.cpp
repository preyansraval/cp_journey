#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> a, int n) {
    sort(a.begin(), a.end());
    int x = a[0], y = a[n-1];
    cout << abs(x - y) << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto& i : a)
            cin >> i;
        
        solve(a, n);
    }
    return 0;
}