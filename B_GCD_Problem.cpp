#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        ll a = 0ll;
        ll b = 0ll;
        if((n-1) % 2 != 0) {
            a = (n-1)/2;
            b = ((n-1)/2) + 1;
        }
        else {
            ll num = (n-1)/2;
            
            if(num % 2 == 0) {
                a = num - 1;
                b = num + 1;
            }
            else {
                a = num - 2;
                b = num + 2;
            }
        }
        cout << a << " " << b << " " << 1 << "\n";
    }
}