#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int totalSum = 15;
    int sum = a+b+c+d;

    cout << totalSum - sum << "\n";
    return 0;
}