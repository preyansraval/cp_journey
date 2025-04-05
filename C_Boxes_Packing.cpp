#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for(auto &i : a)
        cin >> i;
    
    map<ll, ll> m;
    for(int i = 0;i < n;i++) {
        m[a[i]]++;
    }

    vector<pair<ll, ll>> p;
    for(auto &i : m) {
        p.push_back(i);
    }

    sort(p.begin(), p.end(), [](pair<ll, ll> a, pair<ll, ll> b) -> bool {
        return a.first > b.first;
    });

    for(int i = 0;i < p.size();i++) {
        ll s = p[i].second;
        for(int j = i+1;j < p.size();j++) {
            ll temp = max(p[j].second - s, 0ll);
            p[j].second = temp;
        }
    }

    ll count = 0;
    for(auto &i : p) {
        count += i.second;
    }

    cout << count << "\n";
}