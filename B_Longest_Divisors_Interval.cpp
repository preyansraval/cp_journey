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

        int i = 1;
        while(n % i == 0)
            i++;
        
        cout << i-1 << "\n";
    }
    return 0;
}