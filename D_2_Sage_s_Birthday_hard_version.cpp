#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;

    vector<ll> arr(n);
    for(auto& a : arr)
        cin >> a;
    
    sort(arr.begin(), arr.end());

    if(n <= 2) {
        cout << 0 << "\n";
        for(auto a : arr)
            cout << a << " ";
        return 0;
    }

    ll count = 0;
    ll i = 0, j = n-1;
    while(i < j && arr[i] < arr[j]) {
        i++;
        j--;
        count++;
    }

    vector<ll> res(n);
    ll odd = 1, even = 0;
    for(ll x = 0;x < count && odd < n; x++) {
        res[odd] = arr[x];
        odd += 2;
    }

    ll y = count;
    while(y < n && even < odd) {
        res[even] = arr[y];
        even += 2;
        y++;
    }
    
    while(y < n && odd < n-1) {
        res[odd+1] = arr[y];
        y++;
        odd++;
    }

    cout << count << "\n";
    for(auto r : res)
        cout << r << " ";
}