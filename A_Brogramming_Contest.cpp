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

        int count = 0;
        int i = 0;
        while(i < n && s[i] != '1') {
            i++;
        }

        while(i < n) {
            if(i == 0)  count = 1;
            if(i > 0 && s[i] != s[i-1]) {
                count++;
            }
            i++;
        }
        cout << count << "\n";
    }
}