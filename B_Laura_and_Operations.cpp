#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while(t-- > 0) {
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> ans(3, 0);
        if(a >= b && a >= c)    ans[0] = 1;
        if(b >= a && b >= c)    ans[1] = 1;
        if(c >= a && c >= b)    ans[2] = 1;

        cout << ans[0] << " " << ans[1] << " " << ans[2] << "\n";
    }
    return 0;
}