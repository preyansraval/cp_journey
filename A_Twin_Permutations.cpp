#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &a : arr)  cin >> a;

    vector<int> res(n, 0);
    int m = n+1;
    for(int i = 0;i < n;i++) {
        res[i] = m - arr[i];
    }

    for(auto r : res)
        cout << r << " ";
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}