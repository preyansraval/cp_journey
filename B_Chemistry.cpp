#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> freq(26, 0);
        for(int i = 0;i < n;i++)
            freq[s[i] - 'a']++;

        int oddCnt = 0;
        for(int i = 0;i < 26;i++) {
            if(freq[i] % 2 != 0)    oddCnt++;
        }

        if(oddCnt > k+1)
            cout << "NO\n";
        else
            cout <<"YES\n";
    }
    return 0;
}