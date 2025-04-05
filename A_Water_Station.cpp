#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int stationBeforeN = n % 5;
    int d = ((n / 5) + 1) * 5;
    if(stationBeforeN < d-n)
        cout << n - stationBeforeN;
    else
        cout << d;
    return 0;
}