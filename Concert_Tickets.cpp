#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll find(vector<ll> &v, ll target) {
    ll l = 0, h = v.size()-1;
    ll val = -1;
    ll mid = -1;
    while(l <= h) {
        ll m = l + (h-l)/2;
        if(v[m] == target) {
            v[m] = -1;
            return target;
        }
        else if(v[m] < target) {
            mid = m;
            val = v[m];
            l = m + 1;
        }
        else
            h = m-1;
    }
    v.erase(v.begin() + mid);
    return val;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<ll> v(n);
    for(auto &i : v)
        cin >> i;
    
    sort(v.begin(), v.end());

    vector<ll> a(m);
    for(auto &i : a) {
        cin >> i;
    }

    for(auto i : a) {
        ll val = find(v, i);
        cout << val << "\n";
    }
    return 0;
}