#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll x;
    cin >> x;

    //find the most significant bit of x
    ll count = 0;
    for(int i = 0;i < 32;i++) {
        if((x & (1 << i)) != 0)
            count++;
    }
    cout << count << endl;
}