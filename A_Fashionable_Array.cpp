#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &i : arr)
        cin >> i;

    sort(arr.begin(), arr.end());

    int ans = INT_MAX;
    int count = 0;
    int i = 0, j = n-1;
    while(j >= 0 && (arr[i] + arr[j]) % 2 != 0) {
        j--;
    }

    ans = min(ans, n-j-1);
    j = n-1;
    while(i < n && (arr[i] + arr[j]) % 2 != 0)
        i++;
    ans = min(ans, i);

    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
}