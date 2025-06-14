#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto& num : v)
        cin >> num;
    
    sort(v.rbegin(), v.rend());

    for(auto num : v)
        cout << num << " ";
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}