#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(auto &i : a)
        cin >> i;
    
    map<ll, ll> freq;
    for(auto num : a)
        freq[num]++;
    
    ll maxFreq = LLONG_MIN;
    for(auto m : freq)
        maxFreq = max(maxFreq, m.second);
    
    ll ops = 0;
    while(maxFreq < n) {
        ops++;
        if(maxFreq*2ll <= n) {
            ops += maxFreq;
            maxFreq *= 2;
        }
        else {
            ops += n-maxFreq;
            maxFreq = n;
        }
    }
    cout << ops << "\n";
}

int main() {
    ll t;
    cin >> t;
    while(t--)
        solve();
}