#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int n, string s) {
    int cz = 0, co = 0;
    for(int i = 0;i < s.size();i++) {
        if(s[i] == '0') cz++;
        else    co++;
    }

    if(co != cz) {
        cout << -1 << "\n";
        return;
    }

    int l = 0, r = n-1;
    vector<int> ans;
    while(l < r) {
        if(s[l] != s[r]) {
            l++;
            r--;
        }
        else if(s[l] == '0' && s[r] == '0') {
            ans.push_back(r);
            s += '0';
            s += '1';
            r++;
            l++;
        }
        else {
            ans.push_back(l);
            s = '0' + s;
            s = '1' + s;
            l--;
            r++;
        }
    }

    cout << ans.size() << "\n";
    if(ans.size() > 0) {
        for(auto a : ans)
            cout << a << " ";
    }
    else {
        cout << " \n"; 
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while(t-- > 0) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        solve(n, s);
    }
    return 0;
}