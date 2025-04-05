#include <bits/stdc++.h>
using namespace std;

bool isMidValid(int year) {
    vector<int> freq(10,0);
    while(year > 0) {
        int rem = year % 10;
        year /= 10;
        freq[rem]++;
        if(freq[rem] > 1)
            return false;
    }
    return true;
}

int main() {
    int year;
    cin >> year;
    int lo = year+ 1;
    int hi = INT_MAX;
    int val;
    while(lo < hi) {
        int mid = lo + (hi - lo)/2;
        if(isMidValid(mid)) {
            val = mid;
        }
        hi = mid - 1;
    }
    int ans = val;
    for(int i = lo;i < val;i++) {
        if(isMidValid(i)) {
            ans = i;
            break;
        }
    }
    cout << ans;
}