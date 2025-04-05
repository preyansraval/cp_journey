#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;

        int n = s.size();
        string str = s.substr(0, n-2);
        cout << str + "i" << "\n";
    }
    return 0;
}