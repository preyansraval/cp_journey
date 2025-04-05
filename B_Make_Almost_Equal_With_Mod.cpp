#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &i : a)
            cin >> i;
        ll ans = 0;
        for(int i = 0;i <= 57;i++) {
            ll k = (1ll << i);
            bool flag = true;
            ll firstVal = -1ll, secondVal = -1ll;
            for(int j = 0;j < n;j++) {
                ll val = a[j] % k;
                if(firstVal == -1)  firstVal = val;
                if(firstVal != val) {
                    if(secondVal == -1) secondVal = val;
                    if(secondVal != val) {
                        flag = false;
                        break;
                    }
                }
            }
            if(secondVal == -1ll) {
                flag = false;
            }

            if(flag) {
                ans = k;
                break;
            }
        }
        cout << ans <<"\n";
    }
    return 0;
}