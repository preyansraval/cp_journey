#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(string s) {
    stack<char> st;
    int n = s.length();
    int count = 0;
    for(int i = 0;i < n;i++) {
        if(s[i] == '(') {
            st.push(s[i]);
        }
        else {
            st.pop();
        }
        if(st.size() == 0)
            count++;
    }

    if(count > 1)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while(t-- > 0) {
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}