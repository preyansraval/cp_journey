#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n, l, r;
        cin >> n >> l >> r;
        vector<ll> a(n);
        for(auto &i : a)
            cin >> i;
        
        sort(a.begin(), a.end());
        ll count = 0ll;
        for(int i = 0;i < n;i++) {
            count += upper_bound(a.begin(), a.end(), r-a[i]) - a.begin();
            count -= lower_bound(a.begin(), a.end(), l - a[i]) - a.begin();

            if(l <= 2*a[i] && r >= 2*a[i])
                count--;
        }
        cout << count/2 << "\n";
    }
    return 0;
}