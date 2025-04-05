#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll x0;
        ll n;
        cin >> x0 >> n;
        ll nearestVal = 4ll * (n/4);
        nearestVal++;
        for(ll i = nearestVal;i <= n;i++) {
            if(x0 & 1 != 0) {
                x0 += i;
            }
            else {
                x0 -= i;
            }
        }
        cout << x0 << endl;
    }
}