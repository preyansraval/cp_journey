#include <bits/stdc++.h>
using namespace std;

bool solve(string s, string t) {
    if(s == t)
        return true;
    
    int i = s.length() - 1, j = t.length() - 1;
    vector<int> freq(26, 0);
    while(i >= 0 && j >= 0) {
        if(s[i] == t[j] && freq[s[i] - 'A'] > 0)
            return false;
        
        if(s[i] == t[j]) {
            freq[s[i] - 'A'] = 0;
            i--;
            j--;
        }
        else {
            freq[s[i]-'A']++;
            i--;
        }
    }

    if(j > -1)  return false;
    return true;
}

int main() {
    int n;
    cin >> n;
    while(n--) {
        string s, t;
        cin >> s >> t;

        bool ans = solve(s, t);

        cout << (ans ? "YES" : "NO") << "\n";
    }
}