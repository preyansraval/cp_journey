#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll search(vector<ll>& a, ll target) {
    ll ans = -1;
    ll lo = 0;
    ll hi = a.size() - 1;
    while(lo <= hi) {
        ll mid = lo + (hi - lo)/2;
        if(a[mid] <= target) {
            ans = mid;
            lo = mid + 1;
        }
        else
            hi = mid - 1;
    }
    return ans+1;
}

int main() {
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n, 0);
    for(auto& i : a)
        cin >> i;
    
    vector<ll> b(k, 0);
    for(auto& i : b)
        cin >> i;
    
    for(ll i = 0;i < k;i++) {
        ll index = search(a, b[i]);
        cout << index << "\n";
    }
    return 0;
}