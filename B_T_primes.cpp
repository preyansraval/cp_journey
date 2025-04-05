#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> squares;
vector<bool> primes;

void sieve(int n) {
    primes.assign(n+1, true);
    primes[0] = primes[1] = false;
    for(int i = 2;i*i <= n;i++) {
        if(primes[i]) {
            for(int j = i*i;j <= n;j+=i)
                primes[j] = false;
        }
    }

    for(ll i = 2;i <= n;i++) {
        if(primes[i])
            squares.push_back(i*i);
    }
}

void solve(vector<ll> v, int n) {
    for(int i = 0;i < n;i++) {
        ll temp = sqrt(v[i]);
        if(temp*temp == v[i] && primes[temp])
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
}

int main() {
    int n;
    cin >> n;

    vector<ll> v(n);
    for(auto& i : v)
        cin >> i;
    
    sieve(1000100);
    solve(v, n);
    return 0;
}