#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &a : arr)  cin >> a;

    int i = 0, j = 0, maxVal = INT_MIN;
    while(i < n) {
        if(arr[i] == 0) {
            j = i+1;
            while(j < n && arr[j] == 0)
                j++;
            maxVal = max(maxVal, j-i);
            i = j;
        }
        i++;
    }
    cout << max(maxVal, 0) << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}