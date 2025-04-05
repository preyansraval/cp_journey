#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> v, int n) {
    int oddCnt = 0;
    for(auto num : v) {
        if((num & 1) != 0)
            oddCnt++;
    }

    if((oddCnt & 1) == 0) {
        cout << 0 << "\n";
        return;
    }

    int minOps = INT_MAX;
    for(int num : v) {
        int ops = 0;
        if((num & 1) != 0) {
            while((num & 1) != 0) {
                num >>= 1;
                ops++;
            }
        }
        else {
            while((num & 1) == 0) {
                num >>= 1;
                ops++;
            }
        }
        minOps = min(minOps, ops);
    }

    cout << minOps << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(auto& i : v)
            cin >> i;
        
        solve(v, n);
    }
    return 0;
}