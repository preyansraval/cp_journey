#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPrime(ll num) {
    for(ll i = 2;i*i <= num;i++) {
        if(num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll x, k;
        cin >> x >> k;
        
        if(x == 1) {
            if(k != 2) {
                cout << "NO\n";
            }
            else
                cout << "YES\n";
        }
        else if(isPrime(x) && k == 1) {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}
//tc - O(sqrt(num))
//sc - O(1)