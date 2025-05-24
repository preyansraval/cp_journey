#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve() {
    ll num;
    cin >> num;

    ll count = 0;
    while(num != 1) {
        if(num == 0)
            return -1;
        if(num % 6 == 0) {
            count++;
            num /= 6;
        }
        else if(num % 3 == 0) {
            count += 2;
            num /= 3;
        }
        else {
            return -1;
        }
    }
    return count;
}

int main() {
    ll t;
    cin >> t;
    while(t--)
        cout << solve() << "\n";
    return 0;
}