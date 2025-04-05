#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n;
    cin >> n;

    vector<ll> arr(n, 0);
    for(auto& i : arr)
        cin >> i;
    
    ll count = 0;
    for(int i = 1;i < arr.size();i++) {
        ll val = __gcd(arr[i-1], arr[i]);
        if(val != 1) {
            count++;
            arr.insert(arr.begin() + i, 1);
        }
    }
    cout << count << "\n";
    for(int i = 0;i < arr.size();i++) {
        cout << arr[i] << " ";
    }
}