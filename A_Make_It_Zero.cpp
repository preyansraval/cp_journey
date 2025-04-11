#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for(auto &i : v)
            cin >> i;
        
        if((n & 1)) {
            cout << 4 << "\n";
            for(int i = 0;i < 2;i++) {
                cout << 1 << " " << n-1 << "\n";
            }
            for(int i = 0;i < 2;i++)    
                cout << n-1 << " " << n << "\n";
        }
        else {
            cout << 2 << "\n";
            for(int i = 0;i < 2;i++)
                cout << 1 << " " << n << "\n";
        }
    }
    return 0;
}