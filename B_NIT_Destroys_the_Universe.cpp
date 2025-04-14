#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for(auto &i : a)
            cin >> i;
        
        int l = 0, r = n-1;
        //skip starting zeros
        while(l < n && a[l] == 0)
            l++;
        
        //skip trailing zeros
        while(r >= 0 && a[r] == 0)
            r--;
        
        if(l > r) {
            cout << 0 << "\n";
            continue;
        }

        int ans = 1;
        for(int i = l;i <= r;i++) {
            if(a[i] == 0) {
                ans = 2;
                break;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}