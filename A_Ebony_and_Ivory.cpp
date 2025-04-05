#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int x = 0;
    while((c - x*a) >= 0) {
        if((c - x*a) % b == 0) {
            cout << "Yes" << "\n";
            return 0;
        }
        x++;
    }
    cout << "No" << "\n";
}