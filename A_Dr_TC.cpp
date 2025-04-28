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
        ll n;
        cin >> n;
        string s;
        cin >> s;

        ll count = 0;
        for(ll i = 0;i < n;i++) {
            if(s[i] == '0') {
                count++;
            }
            else {
                count += (n - 1);
            }
        }

        cout << count << "\n";
    }
    return 0;
}