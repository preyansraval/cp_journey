#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;
    int freq[26];
    for(int i = 0;i < s.size();i++) {
        char c = (char)(s[i] - 97);
        cout << c << endl;  
    }
    return 0;
}