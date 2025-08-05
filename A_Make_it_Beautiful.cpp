#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(auto &num : nums)   cin >> num;

    sort(nums.begin(), nums.end());

    vector<int> res(n, 0);
    res[0] = nums[n-1];
    res[1] = nums[0];
    if(res[0] == res[1] || (res[0] + res[1]) == nums[1]) {
        cout << "NO\n";
        return;
    }

    for(int i = 1;i < n-1;i++)
        res[i+1] = nums[i];
    cout << "YES\n";
    for(int r : res)
        cout << r << " ";
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}