#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve() {
    ll n;
    cin >> n;
    vector<ll> nums(n);
    for(auto &num : nums)   cin >> num;

    bool isOdd = (nums[0] % 2 != 0 ? true : false);
    ll count = 0, currCnt = 1;
    for(int i = 1;i < n;i++) {
        if(isOdd) {
            if(nums[i] % 2 != 0)
                currCnt++;
            else {
                count += (currCnt - 1);
                currCnt = 1;
                isOdd = false;
            }
        }
        else {
            if(nums[i] % 2 == 0)    currCnt++;
            else {
                count += (currCnt - 1);
                currCnt = 1;
                isOdd = true;
            }
        }
    }
    count += (currCnt - 1);
    return count;
}

int main() {
    ll t;
    cin >> t;
    while(t--)
        cout << solve() << "\n";
    return 0;
}