#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        if((n+1)%3 == 0 || (n-1)%3 == 0)
            cout << "First" << "\n";
        else
            cout << "Second\n";
    }
    return 0;
}
//tc - O(1)
//sc - O(1)