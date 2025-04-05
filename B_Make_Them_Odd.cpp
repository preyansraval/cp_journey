#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<ll> a(n, 0);
        for(auto& i : a)
            cin >> i;

        set<ll> s;
        for(int i = 0;i < n;i++) {
            while(a[i] % 2 == 0) {
                s.insert(a[i]);
                a[i] /= 2;
            }
        }
        cout << s.size() << "\n";
    }
}