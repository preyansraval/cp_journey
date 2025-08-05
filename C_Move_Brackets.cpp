#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    stack<char> st;
    for(int i = 0;i < n;i++) {
        if(s[i] == '(')
            st.push(s[i]);
        else {
            if(st.size() > 0 && st.top() == '(')
                st.pop();
            else
                st.push(s[i]);
        }
    }

    cout << st.size()/2 << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}