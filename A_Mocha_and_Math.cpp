#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto& a : arr)
        cin >> a;
    
    int res = arr[0];
    for(auto a : arr)
        res &= a;
    cout << res << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}