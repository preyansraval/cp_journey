#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(auto& i : v)
            cin >> i;
        
        int l = 0, r = n-1;
        int count = INT_MAX;
        while(l < r) {
            if(v[l] == v[l+1])
                l++;
            if(v[r] == v[r-1])
                r--;
        }

        cout << count << "\n";
    }
    return 0;
}