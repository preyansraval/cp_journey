#include <bits/stdc++.h>
using namespace std;

string solve() {
    string s;
    cin >> s;

    int zero = 0, one = 0, len = s.length();
    for(int i = 0;i < len;i++) {
        if(s[i] == '0') zero++;
        else    one++;
    }

    int size = min(one, zero);
    if(size % 2 != 0)
        return "DA";
    return "NET";
}

int main() {
    int t;
    cin >> t;
    while(t--)
        cout << solve() << "\n";
    return 0;
}