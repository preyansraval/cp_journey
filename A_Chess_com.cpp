#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(string s) {
    char c = s[0];
    int num = s[1] - '0';
    for(int i = 1;i < num;i++) {
        cout << c << i << "\n";
    }
    for(int i = num+1;i <= 8;i++)
        cout << c << i << "\n";
    
    for(char x = 'a';x < c;x++)
        cout << x << num << "\n";
    
    for(char x = c + 1;x <= 'h';x++)
        cout << x << num << "\n";
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