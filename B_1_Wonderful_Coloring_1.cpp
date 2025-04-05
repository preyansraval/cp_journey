#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        vector<int> v(26, 0);
        for(int i = 0;i < s.size();i++) {
            v[s[i] - 'a']++;
        }

        int k = 0;
        for(int i = 0;i < 26;i++) {
            if(v[i] <= 2)   k += v[i];
            else    k += 2;
        }

        cout << k/2 << "\n";
    }
    return 0;
}