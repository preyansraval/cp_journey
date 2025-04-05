#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t-- > 0) {
        int a, b;
        cin >> a >> b;
        int andVal = (a & b);
        if(andVal == 0) {
            andVal = min(a, b);
        }

        int ans = (a ^ andVal) + (b ^ andVal);
        cout << ans << endl;
    }
    return 0;
}