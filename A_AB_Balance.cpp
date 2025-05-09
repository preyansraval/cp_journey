#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int ab = 0, ba = 0;
    int n = s.length();
    for(int i = 0;i < n-1;i++) {
        if(s[i]=='a' && s[i+1]=='b')    ab++;
        else if(s[i]=='b' && s[i+1]=='a')   ba++;
    }

    if(ab == ba)
        cout << s << "\n";
    
}

int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}