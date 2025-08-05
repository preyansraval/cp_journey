#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &a : arr)  cin >> a;

    bool flag = false;
    for(int i = 0;i < n-1;i++) {
        for(int j = i+1;j < n;j++) {
            if(__gcd(arr[i], arr[j]) <= 2) {
                flag = true;
                break;
            }
        }
        if(flag)
            break;
    }

    if(flag)    cout << "Yes\n";
    else    cout << "No\n"; 
}

int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}