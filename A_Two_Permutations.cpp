#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, a, b;
        cin >> n >> a >> b;

        if((n - (a+b)) > 1 || (a == n && b == n))   cout << "Yes\n";
        else    cout << "No\n";
    }
    return 0;
}