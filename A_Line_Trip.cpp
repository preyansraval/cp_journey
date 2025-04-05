#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while(t-- > 0) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for(auto& i : a) {
            cin >> i;
        }

        int maxDist = INT_MIN;
        int currDist = 0;
        for(int i = 0;i < n;i++) {
            maxDist = max(maxDist, a[i] - currDist);
            currDist = a[i];
        }

        maxDist = max(maxDist, 2*(x - currDist));
        cout << maxDist << "\n";
    }
    return 0;
}