#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while(t-- > 0) {
        ll n;
        cin >> n;
        
        while(n % 2 == 0)
            n /= 2;
        
        if(n != 1)  cout << "YES" << "\n";
        else    cout << "NO" << "\n";
    }
    return 0;
}