#include <bits/stdc++.h>
using namespace std;

const int MAX = 200'007;
int arr[MAX], psum[MAX];

int f(int x) {
    int cnt = 0;
    while(x) {
        x /= 3;
        cnt++;
    }
    return cnt;
}

void solve() {
    int l, r;
    cin >> l >> r;

    cout << arr[l] + psum[r] - psum[l-1] << "\n";
}

int main() {

    psum[0] = 0;
    for(int i = 1;i < MAX-1;i++) {
        arr[i] = f(i);
        psum[i] = psum[i-1] + arr[i];
    }
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}