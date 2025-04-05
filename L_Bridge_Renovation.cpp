#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int val = 64 * n;

    int ans = (val + 59) / 60;
    cout << ans << "\n";
}