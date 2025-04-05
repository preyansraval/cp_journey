#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for(auto &i : a)
        cin >> i;
    
    int l = 0, r = 0;
    int len = INT_MIN;
    map<int, int> m;
    for(int i = 0;i < n;i++) {
        if(!m.empty() && m.find(a[i]) != m.end()) {
            l = max(m[a[i]] + 1, l);
        }
        m[a[i]] = i;
        len = max(len, i-l+1);
    }
    cout << len;
}