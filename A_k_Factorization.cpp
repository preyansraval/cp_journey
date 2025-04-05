#include <bits/stdc++.h>
using namespace std;

vector<int> prime_factors;

void smallest_prime_factors(int n) {
    prime_factors.assign(n+1, 0);
    for(int i = 0;i <= n;i++)
        prime_factors[i] = i;
    
    for(int i = 2;i*i <= n;i++) {
        if(prime_factors[i] == i) {
            for(int j = i*i;j <= n;j+=i) {
                prime_factors[j] = min(prime_factors[j], i);
            }
        }
    }
}

int main() {
    int n, k;
    cin >> n >> k;

    smallest_prime_factors(100100);

    vector<int> ans;
    int val = n;
    int x = prime_factors[val];
    int num = x;
    int count = k;
    while(val / x > 1 && count > 1) {
        val /= x;
        ans.push_back(x);
        x = prime_factors[val];
        num *= x;
        count--;
    }
    ans.push_back(val);
    if(ans.size() != k) {
        cout << -1 << "\n";
        return 0;
    }

    for(int i = 0;i < ans.size();i++)
        cout << ans[i] << " ";
}