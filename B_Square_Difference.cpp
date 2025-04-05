#include <bits/stdc++.h>
using namespace std;
#define ll long long

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
        ll a, b;
        cin >> a >> b;

        if((a-b) == 1 && isPrime(a+b)) {
            cout << "YES" << "\n";
        }
        else {
            cout << "NO" << "\n";
        }
    }
}