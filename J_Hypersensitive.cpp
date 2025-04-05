#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool solve2(string s, string t) {
    int i = 0, j = 0;
    int m = s.length(), n = t.length();

    while (i < m && j < n) {
        if (s[i] != t[j]) {
            return false;
        }

        char char_s = s[i];
        char char_t = t[j];
        
        int count_s = 0;
        while (i < m && s[i] == char_s) {
            count_s++;
            i++;
        }
        
        int count_t = 0;
        while (j < n && t[j] == char_t) {
            count_t++;
            j++;
        }

        if (count_t < count_s) {
            return false;
        }
    }

    return i == m && j == n;
}

void solve(string s, string t) {
    vector<int> f1(26, 0), f2(26, 0);
    int n = s.length(), m = t.length();
    for(int i = 0;i < n;i++) {
        f1[s[i] - 'a']++;
    }

    for(int i = 0;i < m;i++) {
        f2[t[i] - 'a']++;
    }

    bool flag = true;
    for(int i = 0;i < 26;i++) {
        if(f2[i] < f1[i]) {
            flag = false;
            break;
        }
    }

    if(flag)    cout << "YES" << "\n";
    else    cout << "NO" << "\n";
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
        string t;
        cin >> t;

        bool flag = solve2(s, t);
        if(flag)    cout << "YES" << "\n";
        else    cout << "NO" << "\n";
    }
    return 0;
}