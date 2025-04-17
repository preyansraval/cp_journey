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
        
        int minOps = INT_MAX;
        for(int i = 0;i < n-1;i++) {
            if(a[i] > a[i+1]) {
                minOps = 0;
                break;
            }

            minOps = min(minOps, (a[i+1] - a[i])/2 + 1);
        }
        cout << minOps << "\n";
    }
    return 0;
}