#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t-- > 0) {
        int p, q, r;
        cin >> p >> q >> r;
        long long ans = 1;
        for(int i = 0;i < 32;i++) {
            int count = 0;
            if(p & (1 << i))    count++;
            if(q & (1 << i))    count++;
            if(r & (1 << i))    count++;

            if(count == 1) {
                ans = 0;
                break;
            }
            else if(count == 3) {
                ans *= 4;
            }
        }
        cout << ans << endl;
    }
    return 0;
}