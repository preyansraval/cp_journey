#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vector<ll> a(n, 0);
        for(auto& i : a)
            cin >> i;
        
        int count = 1;
        for(int i = 0;i < n-1;i++) {
            if(a[i] > a[i+1])
                count++;
        }

        if(n - count >= 1) {
            cout << "YES" << "\n";
        }
        else
            cout << "NO" << "\n";
    }
}