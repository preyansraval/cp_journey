#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
ll power(ll n, ll k) {
    if(k == 0)  return 1;
    ll ans = power(n,k-1);
    ans %= mod;
    ans *= n;
    ans %= mod;
    return ans;
}

int main() {
    int t;
    cin>>t;
    while(t-- > 0) {
        ll n, k;
        cin >> n >> k;

        cout << power(n, k) << endl;
    }
}