#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, e;
    cin >> a>>b>>c>>d>>e;
    map<int, int> mp;
    mp[a] += 1;
    mp[b] += 1;
    mp[c] += 1;
    mp[d] += 1;
    mp[e] += 1;

    if(mp.size() == 2) {
        for(int i : mp) {
            if(mp[i] != 2 || mp[i] != 3) {
                cout << "No";
                break;
            }
        }
    }
}