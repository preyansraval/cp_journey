#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    int l = 1, r = 2 * 1e5;
    vector<int> pre;
    for(int i = 0;i < 32;i++) {
        int count = 0;
        for(int x = l;x <= r;x++) {
            if((x & (1 << i)) == 0)
                count++;
        }
        minVal = min(minVal, count);
    }
    while(t-- > 0) {
        int l, r;
        cin >> l >> r;

        int minVal = INT_MAX;
        

        cout << minVal << "\n";
    }
    return 0;
}