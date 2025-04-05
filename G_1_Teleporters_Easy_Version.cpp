#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n, c;
        cin >> n >> c;
        vector<ll> a(n+1, 0);
        for(int i = 1;i <= n;i++)
            cin >> a[i];
        
        for(int i = 1;i <= n;i++) {
            a[i] += 1ll*i;
        }

        sort(a.begin(), a.end());

        ll count = 0;
        for(int i = 1;i <= n;i++) {
            if(a[i] > c)
                break;
            
            if(a[i] > 0) {
                c = c - a[i];
                a[i] = -1;
                count++;
            }
        }

        cout << count << "\n";
    }
}