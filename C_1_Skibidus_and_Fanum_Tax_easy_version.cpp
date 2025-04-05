#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int  main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;

        vector<ll> a(n);
        for(auto& i : a)
            cin >> i;
        
        vector<ll> b(m);
        for(auto& i : b)
            cin >> i;
        
        bool flag = true;

        ll prev = min(a[0], b[0] - a[0]);
        for(int i = 1;i < n;i++) {
            ll curr = a[i];
            ll p1 = curr;
            ll p2 = b[0] - curr;
            ll temp = LLONG_MAX;
            int count = 0;
            if(prev <= p1) {
                temp = min(temp, p1);
                count++;
            }
            if(prev <= p2) {
                temp = min (temp, p2);
                count++;
            }
            
            if(count == 0) {
                flag = false;
                break;
            }
            prev = temp;
        }

        if(flag)    cout << "YES" << "\n";
        else    cout << "NO" << "\n";
    }
    return 0;
}