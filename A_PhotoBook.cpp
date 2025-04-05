#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;
    
    int len = s.length();
    int res = (len+1)*26 - len;
    cout << res << "\n";
    return 0;
}