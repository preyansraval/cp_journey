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
        
        vector<ll> prefix(n, 0);
        vector<ll> suffix(n, 0);
        prefix[0] = max(0, a[0]);
        for(int i = 1;i < n;i++) {
            prefix[i] = prefix[i-1] + max(0, a[i]);
        }

        suffix[n-1] = max(0, -a[n-1]);
        for(int i = n-2;i >= 0;i--) {
            suffix[i] = suffix[i+1] + max(0, -a[i]);
        }

        ll maxSum = 0;
        for(int i = 0;i < n;i++) {
            maxSum = max(maxSum, prefix[i] + suffix[i]);
        }

        cout << maxSum << "\n";
    }
}