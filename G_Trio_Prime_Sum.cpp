#include <bits/stdc++.h>
using namespace std;

vector<int> getPrimes(int n) {
    vector<bool> p(n+1, true);
    p[0] = p[1] = false;
    for(int i = 2;i*i <= n;i++) {
        if(p[i]) {
            for(int j = i*i;j <= n;j+=i)
                p[j] = false;
        }
    }

    vector<int> prime;
    for(int i = 2;i <= n;i++) {
        if(p[i])
            prime.push_back(i);
    }
    return prime;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> primes = getPrimes(n);

    cout << "\n";
    int m = primes.size();
    int count = 0;
    for(int i = 0;i < m-1;i++) {
        int sum = primes[i] + primes[i+1] + 1;
        auto idx = find(primes.begin(), primes.end(), sum);
        if(idx != primes.end())
            count++;
    }

    if(count >= k)
        cout << "YES";
    else
        cout << "NO";
    
    return 0;
}