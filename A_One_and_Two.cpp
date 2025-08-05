#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve() {
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll product = 1;
    for(auto &a : arr) {
        cin >> a;
    }

    ll count = 0;
    for(ll a : arr)    count += (a == 2);
    ll preCnt = 0;
    for(int i = 0;i < n;i++) {
        if(arr[i] == 2)
            preCnt++;
        if(preCnt == (count - preCnt))
            return i+1;
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    while(t--)
        cout << solve() << "\n";
    return 0;
}