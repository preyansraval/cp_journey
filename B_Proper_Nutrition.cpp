#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(ll n, ll a, ll b) {
    for(ll y = 0;y <= n/2;y++) {
        ll x = (n - y*b);
        if(x >= 0 && x % a == 0) {
            cout << "YES" << "\n";
            cout << x / a << " " << y;
            return;
        }
    }
    cout << "NO" << "\n";
} 

int main() {
    ll n;
    cin >> n;
    ll a;
    cin >> a;
    ll b;
    cin >> b;

    solve(n, a, b);
}