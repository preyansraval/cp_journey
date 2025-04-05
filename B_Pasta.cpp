#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll SIZE = 1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n, m;
    cin >> n >> m;
    ll noodles[n];
    ll plan[m];
    vector<ll> freq(SIZE);
    for(ll i = 0;i < n;i++) {
        cin >> noodles[i];
    }
    for(ll i = 0;i < m;i++) {
        cin >> plan[i];
    }

    for(int i = 0;i < n;i++) {
        freq[noodles[i]]++;
    }
    bool flag = true;
    for(int i = 0;i < m;i++) {
        if(freq[plan[i]] == 0) {
            flag = false;
            break;
        }
        else {
            freq[plan[i]]--;
        }
    }

    if(flag)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}