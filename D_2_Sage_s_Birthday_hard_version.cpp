#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool checker(vector<ll> arr, ll mid) {

    int i = mid - 1, j = arr.size() - 1;
    while(i >= 0 && j > 0) {
        if(arr[i] >= arr[j] || arr[i] >= arr[j-1])
            return false;
        i--;
        j--;
    }
    return true;
}

int main() {
    ll n;
    cin >> n;

    vector<ll> arr(n);
    for(auto& a : arr)
        cin >> a;
    
    sort(arr.begin(), arr.end());

    ll lo = 0, hi = ((n+1)/2) - 1;
    ll ans = 0;
    while(lo <= hi) {
        ll mid = lo + (hi - lo)/2;

        if(checker(arr, mid)) {
            ans = mid;
            lo = mid+1;
        }
        else {
            hi = mid - 1;
        }
    }

    cout << ans << "\n";
    
    vector<ll> res(n);
    int i = n-1, j = ans - 1;
    for(int k = 0;k < n;k++) {
        if(k%2 == 0 || j == -1)
            res[k] = arr[i--];
        else
            res[k] = arr[j--];
    }

    for(auto r : res)
        cout << r << " ";
    cout << "\n";
}