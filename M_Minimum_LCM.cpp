#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;

    int a = 1;
    for(int i = 2;i*i <= n;i++) {
        if(n%i == 0) {
            a = n/i;
            break;
        }
    }
    cout << a << " " << n-a << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
}