#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n>> k;
        k--;
        int floor = n/2;
        cout << ((k + (n % 2) * k/floor) % n + 1) << "\n";
    }
    return 0;
}