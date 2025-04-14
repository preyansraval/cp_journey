#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    int minVal = INT_MAX;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
        minVal = min(minVal, abs(a[i]));
    }
        
    cout << minVal;
}