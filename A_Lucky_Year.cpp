#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long pow = 1;
    long long num = n;
    long long rem = 0;
    while(num != 0) {
        rem = num % 10;
        num /= 10;
        pow *= 10;
    }
    pow /= 10;
    long long ans = ((rem + 1) * pow) - n;
    cout << ans;
    return 0;
}