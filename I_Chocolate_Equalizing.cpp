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
        ll n;
        cin >> n;
        vector<ll> a(n, 0);
        for(auto& i : a)
            cin >> i;
        
        sort(a.begin(), a.end());

        cout << a[n-2] << "\n"; 
    }
    return 0;
}