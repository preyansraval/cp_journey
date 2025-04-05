#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<bool> primes(n+2);

    for(int i = 0;i <= n+1;i++)
        primes[i] = true;
    
    for(int i = 2;i*i <= n+1;i++) {
        if(primes[i]) {
            for(int j = i*i;j <= n+1;j+=i) {
                primes[j] = false;
            }
        }
    }

    vector<int> ans(n+2);
    int k = (n == 1 || n == 2 ? 1 : 2);
    for(int i = 2;i <= n+1;i++) {
        if(primes[i]) {
            ans[i] = 1;
        }
        else {
            ans[i] = 2;
        }
    }
    
    cout << k << "\n";
    for(int i = 2;i <= n+1;i++) {
        cout << ans[i] << " ";
    }
    return 0;
}