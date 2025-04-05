#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(vector<ll> v, ll n) {
    vector<ll> odd;
    vector<ll> even;
    for(ll i = 0;i < v.size();i++) {
        if(v[i] % 2ll == 0ll)
            even.push_back(i);
        else
            odd.push_back(i);
    }

    ll count = 0;
    ll x = 0;
    ll oddSize = odd.size();
    while(x < oddSize - 1 && count != n-1) {
        cout << odd[x]+1 << " " << odd[x+1]+1 << "\n";
        count++;
        x+=2;
    }

    ll evenSize = even.size();
    ll y = 0;
    while(y < evenSize-1 && count != n-1) {
        cout << even[y]+1 <<  " " << even[y+1]+1 << "\n";
        count++;
        y+=2;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while(t-- > 0) {
        ll n;
        cin >> n;
        vector<ll> v(2*n, 0);
        for(auto&i : v)
            cin >> i;
        
        solve(v, n);
    }
    return 0;
}