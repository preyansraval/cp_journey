#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool solve(string s, int n) {
    bool digit = false, chars = false;
    if(s[0] >= 'a' && s[0] <= 'z')
        return false;
    for(int i = 1;i < n;i++) {
        if(s[i] >= '0' && s[i] <= '9' && chars)
            return false;
        else if(s[i] >= 'a' && s[i] <= 'z' && !digit)
            return false;
        else if(s[i] >= '0' && s[i] <= '9' && s[i-1] >= '0' && s[i-1] <= '9' && s[i] < s[i-1])
            return false;
        else if(s[i] >= 'a' && s[i] <= 'z' && s[i-1] >= 'a' && s[i-1] <= 'z' && s[i] < s[i-1])
            return false;
        else if(s[i] >= '0' && s[i] <= '9')
            digit = true;
        else
            chars = true;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while(t-- > 0) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool flag = solve(s, n);
        if(flag)
            cout << "YES" << "\n";
        else    
            cout << "NO" << "\n";
    }
    return 0;
}