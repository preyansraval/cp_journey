#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int n = a.length(), m = b.length();
    vector<string> res;
    for(int i = 1;i <= n;i++) {
        string temp = a.substr(0, i);
        for(int j = 1;j <= m;j++) {
            temp += b.substr(0, j);
            res.push_back(temp);
        }
    }

    sort(res.begin(), res.end());
    cout << res[0] << "\n";
    return 0;
}