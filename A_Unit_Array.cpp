#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &a : arr)
        cin >> a;
    
    int p = 0, ne = 0;
    for(int a : arr) {
        if(a == -1)
            ne++;
        else
            p++;
    }

    int count = 0;
    while(p < ne || ne % 2 != 0) {
        count++;
        p++;
        ne--;
    }

    cout << count << '\n';
}

int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}