#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        map<ll, ll> m;
        ll x = 1;
        for(ll i = 2;i*i <= n;i++) {
            if(n % i == 0) {
                ll cnt = 0;
                while(n%i == 0) {
                    n /= i;
                    cnt++;
                }
                m[i] = cnt;
                x = max(x, cnt);
            }
        }
        if(n != 1)
            m[n] = 1;
        
        ll ans = 0;
        for(ll i = 1;i <= x;i++) {
            ll product = 1;
            for(auto it=m.begin();it != m.end();it++) {
                if(it->second > 0) {
                    m[it->first]--;
                    product *= it->first;
                }
            }
            ans += product;
        }

        cout << ans << "\n";
    }
    return 0;
}