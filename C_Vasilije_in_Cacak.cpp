#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n, k, x;
        cin >> n >> k >> x;

        ll minSum = k*(k+1)/2;
        ll maxSum = n*(n+1)/2 - (n-k)*(n-k+1)/2;
        if(x >= minSum && x <= maxSum)  cout << "YES\n";
        else    cout << "NO\n";
    }
    return 0;
}