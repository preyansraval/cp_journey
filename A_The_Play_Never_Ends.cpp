#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll k;
        cin >> k;

        cout << ((k%3ll == 1) ? "YES" : "NO") << "\n";
    }
    return 0;
}