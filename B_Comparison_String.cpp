#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int count = 1, maxCnt = 0;
        for(int i = 1;i < n;i++) {
            if(s[i] == s[i-1])
                count++;
            else {
                maxCnt = max(maxCnt, count);
                count = 1;
            }
        }

        cout << max(maxCnt, count) + 1 << "\n";
    }
    return 0;
}