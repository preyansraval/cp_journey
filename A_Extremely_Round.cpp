#include <bits/stdc++.h>
using namespace std;

int solve() {
    int n;
    cin >> n;

    int count = 1;
    int div = 10;
    int val = n/div;
    if(n < 10)
        return n;
    while(val == 0 || val > 9) {
        div *= 10;
        val = n/div;
        count++;
    }

    int res = (count * 9) + (n / div);
    return res;
}

int main() {
    int t;
    cin >> t;
    while(t--)
        cout << solve() << "\n";
    return 0;
}