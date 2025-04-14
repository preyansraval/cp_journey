#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for(auto &i : a)
        cin >> i;
    
    int count = INT_MAX;
    int even = 0;
    for(int num : a) {
        if(num % k == 0) {
            count = 0;
            break;
        }
        count = min(count, k - (num%k));
        if(num % 2 == 0)
            even++;
    }

    if(k == 4) {
        if(even >= 2)  count = min(0, count);
        else if(even == 1)  count = min(1, count);
        else if(even == 0)  count = min(2, count);
    }
    cout << count << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}