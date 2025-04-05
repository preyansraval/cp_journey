#include <bits/stdc++.h>
using namespace std;

int knapsack(vector<vector<int>> arr, int idx, int N, int W, int val) {
    if(idx == N || W <= 0)
        return val;
    
    int ans = INT_MIN;
    if(W-arr[idx][0] >= 0)
        ans = max(ans, knapsack(arr, idx+1, N, W-arr[idx][0], val+arr[idx][1]));
    ans = max(ans, knapsack(arr, idx+1, N, W, val));

    return ans;
}

int main() {
    int N, W;
    cin >> N >> W;
    vector<vector<int>> arr(N, vector<int>(2, 0));
    for(auto& i : arr) {
        for(auto& j : i) {
            cin >> j;
        }
    }

    int ans = knapsack(arr, 0, N, W, 0);
    cout << ans;
}