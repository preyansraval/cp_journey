#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> primes;
vector<bool> is_prime;

void sieve(int n) {
    is_prime.assign(n+1, true);
    is_prime[0] = is_prime[1] = false;
    for(int i = 2;i*i <= n;i++) {
        if(is_prime[i]) {
            for(int j = i*i;j <= n;j+=i)
                is_prime[j] = false;
        }
    }

    for(int i = 2;i <= n;i++) {
        if(is_prime[i])
            primes.push_back(i);
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    int arr[n][m];
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < m;j++)
            cin >> arr[i][j];
    }

    sieve(100100);

    int ans = INT_MAX;

    for(int i = 0;i < n;i++) {
        int count = 0;
        for(int j = 0;j < m;j++) {
            int num = (*lower_bound(primes.begin(), primes.end(), arr[i][j]));
            count += num - arr[i][j];
        }
        ans = min(ans, count);
    }

    for(int j = 0;j < m;j++) {
        int count = 0;
        for(int i = 0;i < n;i++) {
            int num = (*lower_bound(primes.begin(), primes.end(), arr[i][j]));
            count += num - arr[i][j];
        }
        ans = min(ans, count);
    }

    cout << ans << "\n";
}