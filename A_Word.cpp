#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int ucc = 0;
    int lcc = 0;
    for(int i = 0;i < s.length();i++) {
        if(s[i] >= 'a' && s[i] <= 'z')
            lcc++;
        else
            ucc++;
    }

    if(lcc >= ucc) {
        for(int i = 0;i < s.length();i++) {
            if(s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = (char)(s[i] + 32);
            }
        }
    }
    else {
        for(int i = 0;i < s.length();i++) {
            if(s[i] >= 'a' && s[i] <= 'z') {
                s[i] = (char)(s[i] - 32);
            }
        }
    }

    cout << s;
    return 0;
}