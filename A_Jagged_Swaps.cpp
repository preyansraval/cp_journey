#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> a, int n) {
    if(a[0] != 1)
        return false;
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto& i : a)
            cin >> i;
        
        bool ans = solve(a, n);

        if(ans) cout << "YES\n";
        else    cout << "NO\n";
    }
    return 0;
}