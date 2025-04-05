#include <bits/stdc++.h>
using namespace std;

void solve(int n, string s) {
    bool flag = false;
    int count = 0;
    for(int i = 0;i < n;i++) {
        if(s[i] == '.') count++;

        if(s[i] == '.' && s[i-1] == '.' && s[i+1] == '.') {
            count = 2;
            break;
        }
    }

    cout << count << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t-- > 0) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        solve(n, s);
    }
    return 0;
}