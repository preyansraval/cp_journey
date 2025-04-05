#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(string s1, string s2) {
    map<char, int> s1m;
    bool flag = true;
    int n  = s1.length();
    for(int i = 0;i < n;i++) {
        if(s1[i] == ' ')
            continue;
        s1m[s1[i]]++;
    }
    int m = s2.length();
    for(int i = 0;i < m;i++) {
        if(s2[i] == ' ')
            continue;
        
        if(s1m[s2[i]] == 0) {
            flag = false;
            break;
        }
        else {
            s1m[s2[i]] = 0;
        }
    }
    if(flag)    cout << "YES" << "\n";
    else    cout << "NO" << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s1, s2;
    cin >> s1, s2;

    solve(s1, s2);
    return 0;
}