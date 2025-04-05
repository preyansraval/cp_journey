#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a>> b>> c>> d;

    int x = -1, y = -1;
    for(int i = 1;i <= 100;i++) {
        x = b + (i-1)*a;
        for(int j = 1;j <= 100;j++) {
            y = d + (j-1)*c;
            if(x == y) {
                cout << x << "\n";
                return 0;
            }
        }
    }

    cout << -1 << "\n";
    return 0;
}