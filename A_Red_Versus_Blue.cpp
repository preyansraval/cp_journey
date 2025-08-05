#include <bits/stdc++.h>
using namespace std;
#define mystring (int x, char y) { string res = ""; for(int i = 0;i < x;i++) {cout << y;}};

string print(int x, char y) {
    string res = "";
    for(int i = 0;i < x;i++)
        res += y;
    return res;
}

void solve() {
    int n, r, b;
    cin >> n >> r >> b;

    int x = r / (b + 1);
    int y = r % (b + 1);

    string res = "";
    
    for(int i = 1;i <= y;i++)   cout << print(x+1, 'R') << "B";

    for(int i = y;i < b;i++)    cout << print(x, 'R') << "B";

    cout << print(x, 'R') << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}