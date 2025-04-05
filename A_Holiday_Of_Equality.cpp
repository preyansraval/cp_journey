#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int maxVal = INT_MIN;
    for(int i = 0; i < n;i++) {
        cin >> a[i];
        maxVal = max(maxVal, a[i]);
    }
    
    int amount = 0;
    for(int i = 0;i < n;i++) {
        amount += (maxVal - a[i]);
    }
    cout << amount;
}