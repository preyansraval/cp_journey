#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n, 0);
        for(auto& i : a)
            cin >> i;
        
        sort(a.begin(), a.end());

        long long count = 0;
        for(int i = 1;i < n;i++) {
            count += (a[i] - a[0]);
        }
        cout << count << "\n";
    }
}