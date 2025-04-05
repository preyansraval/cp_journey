#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> sieve(ll n) {
    vector<bool> p(n+1, true);
    p[0] = p[1] = false;
    for(ll i = 2;i*i <= n;i++) {
        if(p[i] == true) {
            for(ll j=i*i;j <= n;j+=i) {
                p[j] = false;
            }
        }
    }

    vector<ll> primes (n+1, 0);
    for(int i = 0;i <= n;i++)
        primes[i] = i;
    
    for(ll i = 2;i * i <= n;i++) {
        if(p[i] == true) {
            for(ll j = i*i;j <= n;j+=i) {
                primes[j] = min(primes[j], i);
            }
        }
    }

    return primes;

    
}

ll solve(ll n) {
    vector<ll> primes = sieve(n);
    ll ans = 0;
    for(ll i = n;i >= 1;i--) {
        set<ll> s;
        ll val = i;
        while(val != 1) {
            s.insert(primes[val]);
            val = 1ll*val/primes[val];
        }

        if(s.size() == 2)
            ans++;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n;
    cin >> n;
    
    ll count = solve(n);
    cout << count << "\n";
    return 0;
}