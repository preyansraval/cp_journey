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
        ll arr[5];
        cin >> arr[0] >> arr[1] >> arr[3] >> arr[4];

        ll maxCnt = 0;
        arr[2] = arr[0] + arr[1];
        ll count = 0;
        for(ll i = 2;i < 5;i++) {
            if(arr[i-2] + arr[i-1] == arr[i])
                count++;
        }
        maxCnt = max(maxCnt, count);
        arr[2] = arr[3] - arr[1];
        count = 0;
        for(ll i = 2;i < 5;i++) {
            if(arr[i-2] + arr[i-1] == arr[i])
                count++;
        }
        maxCnt = max(maxCnt, count);
        arr[2] = arr[4] - arr[3];
        count = 0;
        for(ll i = 2;i < 5;i++) {
            if(arr[i-2] + arr[i-1] == arr[i])
                count++;
        }
        maxCnt = max(maxCnt, count);
        cout << maxCnt << "\n";
    }
    return 0;
}