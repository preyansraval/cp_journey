#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.length();
    
    if(s[0] == s[n-1])
        cout << s << "\n";
    else {
        s[n-1] = s[0];
        cout << s << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}