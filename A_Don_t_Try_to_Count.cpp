#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x;
        cin >> s;

        int ops = 0;
        bool flag = false;
        for(int i = 0;i < 6;i++) {
            if(x.find(s) != string::npos) {
                cout << i << "\n";
                flag = true;
                break;
            }
            x += x;
        }
        if(!flag)
            cout << -1 << "\n";
    }
}