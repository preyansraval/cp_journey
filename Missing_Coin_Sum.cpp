#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;

    vector<ll> a(n);
    for(auto& i : a)
        cin >> i;
    
    sort(a.begin(), a.end());
    if(a[0] != 1) {
        cout << 1 << "\n";
        return 0;
    }

    ll minSum = 0;
    ll maxSum = 1;
    for(int i = 1;i < n;i++) {
        ll  newMinSum = minSum + a[i];
        ll  newMaxSum = maxSum + a[i];
        if(newMinSum - maxSum > 1)
            break;
        
        maxSum = max(maxSum, newMaxSum);
    }
    cout << maxSum + 1 << "\n";
    return 0;
}