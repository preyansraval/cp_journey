#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;

    int res = 1;
    while(res <= 10) {
        if(((res*k) % 10 == 0) || ((res*k) % 10 == r))
            break;
        res++;
    }

    cout << res << "\n";
    return 0;
}