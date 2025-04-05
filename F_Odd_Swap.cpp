#include <bits/stdc++.h>
using namespace std;
#define ll long long

void sort_with_odd_sum_swaps(vector<ll>& arr) {
    ll n = arr.size();
    ll left = 0;
    ll right = n - 1;

    while (left < right) {
        if (arr[left] % 2 == 0) {
            left++;
        } else if (arr[right] % 2 != 0) {
            right--;
        } else {
            ll temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }

    sort(arr.begin(), arr.begin() + left);
    sort(arr.begin() + left, arr.end());

    for(auto& i : arr)
        cout << i << " ";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n;
    cin >> n;
    vector<ll> v(n);
    for(auto& i : v)
        cin >> i;
    
    sort_with_odd_sum_swaps(v);
    // vector<ll> even;
    // vector<ll> odd;

    // for(int i = 0;i < n;i++) {
    //     if(v[i] % 2 != 0)
    //         odd.push_back(v[i]);
    //     else
    //         even.push_back(v[i]);
    // }
    

    // sort(odd.begin(), odd.end());
    // sort(even.begin(), even.end());
    // ll x = 0, y = 0;
    // vector<ll> res(n);
    // ll idx = 0;
    // ll n1 = odd.size(), n2 = even.size();
    // while(x < n1 && y < n2) {
    //     if(odd[x] < even[y]) {
    //         res[idx++] = odd[x];
    //         x++;
    //     }
    //     else {
    //         res[idx++] = even[y];
    //         y++;
    //     }
    // }

    // while(x < n1) {
    //     res[idx++] = odd[x];
    //     x++;
    // }

    // while(y < n2) {
    //     res[idx++] = even[y];
    //     y++;
    // }

    // for(auto& i : res)
        // cout << i << " ";
    return 0;
}