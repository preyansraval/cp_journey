#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string seq[] = {"00", "25", "50", "75"};

ll process(string s, string x) {
    ll ans =  0ll;
    ll i = s.length() - 1;
    while(i >= 0 && s[i] != x[1]) {
        i--;
        ans++;
    }

    if(i < 0)
        return LLONG_MAX;
    
    i--;
    while(i >= 0 && s[i] != x[0]) {
        i--;
        ans++;
    }

    return i < 0 ? LLONG_MAX : ans;
}

void solve() {
    string s;
    cin >> s;

    ll ans = LLONG_MAX;
    for(auto x : seq) {
        ans = min(ans, process(s, x));
    }

    cout << ans << "\n";
}

int main() {
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}