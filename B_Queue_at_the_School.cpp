#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int t;
    cin >> n >> t;
    string s;
    cin >> s;

    for(int i = 1;i <= t;i++) {
        int j = 0;
        while(j < s.length() - 1) {
            if(s[j] == 'B' && s[j+1] == 'G') {
                char temp = s[j+1];
                s[j+1] = s[j];
                s[j] = temp;
                j += 2;
            }
            else {
                j++;
            }
        }
    }

    cout << s;
}