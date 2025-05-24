#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
using namespace std;

void solve() {
    int lo = 2, hi = 1000;
    for(int itr = 1;itr <= 10;itr++) {
        int mid = lo + (hi - lo)/2;
        cout << "? 1 " << mid << "\n";
        int resp;
        cin >> resp;

        if(resp == mid)
            lo = mid + 1;
        else
            hi = mid;
    }

    cout << "! " << lo << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
}