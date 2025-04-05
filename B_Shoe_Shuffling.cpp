#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int n, ll arr[]) {
    int ans[n];
    for(int i = 0;i < n;) {
        ll temp = arr[i];
        ll sz = 1ll;
        ans[i] = i;
        i++;
        while(i < n && arr[i] == temp) {
            ans[i] = ans[i-1];
            ans[i-1] = i;
            i++;
            sz++;
        }
        if(sz == 1) {
            cout << -1 << "\n";
            return;
        }
    }
    for(int i = 0;i < n;i++) {
        cout << ans[i] + 1 << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while(t-- > 0) {
        int n;
        cin >> n;
        ll arr[n];
        for(ll i = 0;i < n;i++) {
            cin >> arr[i];
        }
        solve(n, arr);
    }
    return 0;
}