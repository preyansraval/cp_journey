#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> prefix(n, -1);
    prefix[n-1] = n-1;
    for(int i = n-2;i >= 0;i--) {
        prefix[i] = (s[i] <= s[prefix[i+1]] ? i : prefix[i+1]);
    }

    for(int i = 0;i < n;i++) {
        if(prefix[i] != -1 && prefix[i] != i) {
            cout << "YES\n";
            cout << i+1 << " " << prefix[i]+1;
            return 0;
        }
    }

    cout << "NO\n";
    return 0;
}