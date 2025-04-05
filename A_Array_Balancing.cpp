#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<ll> a(n, 0);
        vector<ll> b(n, 0);
        for(auto& i : a)
            cin >> i;
        
        for(auto& i : b)
            cin >> i;
        
        for(int i = 0;i < n-1;i++) {
            if(abs(a[i] - a[i+1]) + abs(b[i] - b[i+1]) > abs(b[i] - a[i+1]) + abs(a[i] - b[i+1])) {
                ll temp = a[i+1];
                a[i+1] = b[i+1];
                b[i+1] = temp;
            }
        }

        ll sum = 0;
        for(int i = 0;i < n-1;i++) {
            sum += abs(a[i] - a[i+1]) + abs(b[i] - b[i+1]);
        }
        cout << sum << "\n";
    }
    return 0;
}