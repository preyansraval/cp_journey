#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &a : arr)  cin >> a;

    int x = 0;
    for(int a : arr)    x = (x ^ a);

    if((n & 1))
        cout << x << "\n";
    else {
        if(x > 0)
            cout << -1 << "\n";
        else
            cout << x << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}