#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<string> myset;
    vector<string> res;
    while(n--) {
        string s;
        cin >> s;
        
        myset.insert(s);
        res.push_back(s);
    }

    for(int i = res.size() - 1;i >= 0;i--) {
        if(!myset.empty() && myset.find(res[i]) != myset.end()) {
            myset.erase(res[i]);
            cout << res[i] << "\n";
        }
    }
    return 0;
}