#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPartitionPossible(vector<ll> a, ll k, ll sum) {
    ll currentSum = 0, partitions = 1, n = a.size();
    for(ll i = 0;i < n;i++) {
        if(a[i] > sum)
            return false;
        if(currentSum + a[i] > sum) {
            currentSum = a[i];
            partitions++;
            continue;
        }
        currentSum += a[i];
    }
    return partitions <= k;
}

int main() {
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for(auto &i : a)
        cin >> i;
    
    ll lo = 1, hi = 2e14;
    ll ans = -1;
    while(lo <= hi) {
        ll mid = lo + (hi - lo)/2;
        if(isPartitionPossible(a, k, mid)) {
            ans = mid;
            hi = mid - 1;
        }
        else
            lo = mid + 1;
    }    

    cout << ans << "\n";
}