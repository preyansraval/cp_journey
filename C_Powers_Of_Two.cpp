#include <bits/stdc++.h>
using namespace std;

void solve(int n, int k) {
    if(n < k) {
        cout << "NO" << endl;
        return;
    }

    vector<int> arr;
    for(int i = 0;i < 32;i++) {
        if(n & (1 << i)) {
            arr.push_back(1<<i);
        }
    }

    int size = arr.size();
    if(size > k) {
        cout << "NO" << endl;
        return;
    }
    int idx = 0;
    while(size < k) {
        while(arr[idx] == 1)    idx++;
        arr[idx] /= 2;
        arr.push_back(arr[idx]);
        size++;
    }
    cout << "YES" << endl;
    sort(arr.begin(), arr.end());
    for(int i = 0;i < arr.size();i++)  {
        cout << arr[i] << " ";
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    solve(n, k);
    return 0;
}