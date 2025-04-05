#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for(auto &i : arr)
        cin >> i;
    sort(arr.begin(), arr.end());
    vector<int> range(n,0);
    for(int i = 0;i < q;i++) {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        range[l]++;
        if(r+1 < n)
            range[r+1]--;
    }
    for(int i = 1;i < n;i++) {
        range[i] += range[i-1];
    }
    sort(range.begin(), range.end());
    long long sum = 0;
    for(int i = 0;i < n;i++) {
        sum += 1ll * range[i] * arr[i];
    }
    cout << sum << endl;
    return 0;
}