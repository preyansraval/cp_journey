#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(auto &i : a)
            cin >> i;
        
        
        ll i = 0, j = n-1;
        ll lSum = a[i], rSum = a[j];
        ll count = 0ll, maxCount = 0ll;
        while(i < j) {
            if(lSum == rSum) {
                count = (i+1) + (n-j);
                maxCount = max(maxCount, count);
                i++;
                j--;
                lSum += a[i];
                rSum += a[j];
            }
            else if(lSum > rSum) {
                j--;
                rSum += a[j];
            }
            else {
                i++;
                lSum += a[i];
            }
        }
        cout << maxCount << "\n";
    }
    return 0;
}