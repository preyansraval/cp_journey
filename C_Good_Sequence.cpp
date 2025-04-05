#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    
    for(auto &i : a)
        cin >> i;

    map<ll, ll> freq;
    for(int i = 0;i < n;i++) {
        freq[a[i]]++;
    }

    ll count = 0;
    for(auto m : freq) {
        if(m.first < m.second)  count += m.second - m.first;
        else if(m.first > m.second) count += m.second;
    }

    cout << count;
}