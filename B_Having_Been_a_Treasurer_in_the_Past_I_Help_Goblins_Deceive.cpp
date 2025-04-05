#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        ll line = 0, us = 0;
        for(int i = 0;i < n;i++) {
            if(s[i] == '-')
                line++;
            else
                us++;
        }

        if(line < 2 || us < 1)
            cout << 0 << "\n";
        else
            cout << (1ll * line * line/4)*us << "\n";
    }
    return 0;
}