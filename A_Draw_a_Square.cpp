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
        int l, r, d, u;
        cin >> l >> r >> d >> u;

        if((l-u) == (u-r) && (u-r) == (r-d) && (r-d) == (d-l) && (d-l) == (l-u))   
            cout << "Yes" << "\n";
        else
            cout << "No" << "\n";
    }
    return 0;
}