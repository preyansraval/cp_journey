#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n-- > 0) {
        int x;
        int y;
        cin >> x >> y;
        if(y >= -1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}