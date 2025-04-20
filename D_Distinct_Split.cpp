#include <bits/stdc++.h>
using namespace std;

int getFrequency(string s) {
    vector<int> freq(26, 0);
    for(int i = 0;i < s.length();i++) {
        
    }
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int maxLen = INT_MIN;
    vector<int> freq1(26, 0), freq2(26, 0);

    for(int i = 0;i < n;i++) {
        freq1[s[i] - 'a']++;
    }

    for(int i = 0;i < n;i++) {
        freq1[s[i] - 'a']--;
        freq2[s[i] - 'a']++;
        int count = 0;
        for(int i = 0;i < 26;i++) {
            count += min(1, freq1[i]) + min(1, freq2[i]);
        }
        maxLen = max(maxLen, count);
    }
    
    cout << maxLen << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
}