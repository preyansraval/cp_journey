#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;

        int cntZero = 0, cntOne = 0, n = s.length();
        for(int i = 0;i < n;i++) {
            if(s[i] == '0') cntZero++;
            else    cntOne++;
        }

        for(int i = 0;i < n;i++) {
            if(s[i] == '0') {
                if(cntOne > 0)
                    cntOne--;
                else
                    break;
            }
            else {
                if(cntZero > 0)
                    cntZero--;
                else
                    break;
            }
        }

        cout << cntOne + cntZero << "\n";
    }
    return 0;
}

// tc - O(n)
// sc - O(1)