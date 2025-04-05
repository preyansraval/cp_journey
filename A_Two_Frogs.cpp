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
        int n, a, b;
        cin >> n >> a >> b;

        if(abs(b-a) & 1)
            cout << "NO" << "\n";
        else
            cout << "YES" << "\n";
    }
    return 0;
}