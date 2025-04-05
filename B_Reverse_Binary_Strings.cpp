#include <bits/stdc++.h>
using namespace std;
#define ll long long

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

        int cz = 0, co = 0;
        for(int i = 0;i < n-1;i++) {
            if(s[i] == s[i+1]) {
                if(s[i] == '1')
                    co++;
                else
                    cz++;
            }
        }

        cout << max(cz, co) << "\n";
    }
    return 0;
}