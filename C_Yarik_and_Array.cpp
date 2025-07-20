#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i : a)
        cin >> i;
    
    int maxSum = a[0], sum = a[0], parity = (a[0] % 2 == 0 ? 0 : 1);
    for(int i = 1;i < n;i++) {
        int currParity = (a[i] % 2 == 0 ? 0 : 1);
        if(currParity != parity) {
            if(sum < 0) {
                sum = a[i];
            }
            else
                sum += a[i];
            maxSum = max(maxSum, sum);
            parity = currParity;
        }
        else {
            maxSum = max(maxSum, sum);
            sum = a[i];
        }
        maxSum = max(maxSum, sum);
    }
    maxSum = max(maxSum, sum);
    cout << maxSum << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}