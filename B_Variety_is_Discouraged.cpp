#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for(auto &i : a) {
            cin >> i;
        }

        map<ll, ll> freq;
        set<ll> unique_elements;
        for(int i = 0;i < n;i++) {
            freq[a[i]]++;
        }

        for(auto f : freq) {
            if(f.second == 1)
                unique_elements.insert(f.first);
        }

        ll best_l = -1, best_r = -1, maxLength = 0;
        for(int l = 0, r = 0;r < n;r++) {
            if(unique_elements.count(a[r]) == 0) {
                l = r + 1;
            }
            else {
                ll length = 1ll * (r-l+1);
                if(length > maxLength) {
                    maxLength = length;
                    best_l = l;
                    best_r = r;
                }
            }
        }

        if(maxLength == 0)
            cout << 0  << "\n";
        else
            cout << best_l + 1 << " " << best_r + 1 << "\n";
    }
    return 0;
}