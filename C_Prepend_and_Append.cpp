#include <bits/stdc++.h>
using namespace std;

int solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int i = 0, j = n-1;
    while(i < j && s[i] != s[j]) {
        i++;
        j--;
    }

    return (j - i + 1);
}

int main() {
    int t;
    cin >> t;
    while(t--)
        cout << solve() << "\n";
    return 0;
}