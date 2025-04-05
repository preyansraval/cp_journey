#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll MAX = 1e6;
int main() {
    ll k;
    cin >> k;
    
    ll num = 19;
    while(k > 0) {
        ll temp = num;
        ll sum = 0;
        while(temp != 0) {
            ll rem = temp%10;
            sum += rem;
            temp /= 10;
        }
        if(sum == 10)
            k--;
        num++;
    }
    cout << num-1 << "\n";
    return 0;
}