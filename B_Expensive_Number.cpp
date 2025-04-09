#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(string num) {
    int n = num.length();
    int i = n-1;
    while(i >= 0 && num[i] == '0')
        i--;
    
    int cnt = 0;
    while(i > 0) {
        if(num[i] == '0')
            cnt++;
        i--;
    }

    cout << n - cnt - 1 << "\n";
}

int main() {
    ll t;
    cin >> t;
    while(t--) {
        string num;
        cin >> num;

        solve(num);
    }
    return 0;
}