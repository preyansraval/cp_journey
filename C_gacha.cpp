#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    set<string> freq;
    while(N--) {
        string s;
        cin >> s;
        freq.insert(s);
    }
    cout << freq.size() << "\n";
    return 0;
}