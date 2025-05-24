#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll checker(ll n, ll S, vector<ll>& arr, ll k) {
    vector<ll> temp(n, 0);
    ll sum = 0;
    for(ll i = 0;i < n;i++) {
        temp[i] = (arr[i] + (i+1)*k);
    }
    sort(temp.begin(), temp.end());
    for(ll i = 0;i < k;i++)
        sum += temp[i];
    return (sum <= S ? sum : -1);
}

int main() {
    ll n, S;
    cin >> n >> S;

    vector<ll> arr(n);

    for(auto& i : arr)
        cin >> i;

    //sort(arr.begin(), arr.end());

    ll k = 0, T = 0, lo = 0, hi = n;
    while(lo <= hi) {
        ll mid = lo + (hi - lo)/2;
        ll temp = checker(n, S, arr, mid);
        if(temp >= 0) {
            k = mid;
            T = temp;
            lo = mid + 1;
        }
        else
            hi = mid - 1;
    }

    cout << k << " " << T << "\n";
}