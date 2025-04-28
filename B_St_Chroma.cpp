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
        ll n, x;
        cin >> n >> x;

        vector<ll> res(n, 0);
        ll val = 0;
        for(int i = 0;i < n;i++) {
            if(val == x)
                val++;
            if(val == n)
                break;
            res[i] = val++;
        }
        res[n-1] = (x == n ? n-1 : x);
        for(ll a : res)
            cout << a << " ";
        cout << "\n";
    }
    return 0;
}