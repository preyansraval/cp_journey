#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(auto& a : arr)
        cin >> a;
    
    vector<ll> temp = arr;
    map<ll, ll> ans;
    vector<ll> prefix(n, 0);

    //sort the temp array
    sort(temp.begin(), temp.end());
    //Calculate prefix sum array
    prefix[0] = temp[0];
    for(int i = 1;i < n;i++)
        prefix[i] = prefix[i-1] + temp[i];
    
    // The answer for (n-1)th index is always (n-1).
    ans[temp[n-1]] = n-1;
    for(int i = n-2;i >= 0;i--) {
        int found = i;
        int j = i;
        while(j < n) {
            ll num = prefix[j] + 1;
            int idx = lower_bound(temp.begin(), temp.end(), num) - temp.begin();
            idx--;
            if(idx == j)
                break;
            
            found += idx - j;
            j = idx;
        }
        
        ans[temp[i]] = found;
    }


    for(int a : arr)
        cout << ans[a] << " ";
    cout << endl;
}

int main() {
    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}