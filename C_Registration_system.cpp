#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> m;
    while(n--) {
        string s;
        cin >> s;
        int count;
        if(m.count(s)) {
            count = m[s];
            m[s]++;
            cout << s << count << "\n";
        }
        else {
            m[s] = 1;
            cout << "OK" << "\n";
        }
    }
    return 0;
}