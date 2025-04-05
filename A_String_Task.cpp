#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y'};
    string res;
    for(int i = 0;i < s.length();i++) {
        if(vowels.count(s[i]) > 0)  continue;

        char c = s[i];
        char lower_c = (c >= 'A' && c <= 'Z' ? c+32 : c);
        res = res + '.' + lower_c;
    }

    cout << res;
}