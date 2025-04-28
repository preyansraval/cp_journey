#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, d;
    cin >> n >> d;
    vector<ll> v(n);
    for(auto &i : v)
        cin >> i;
    
    sort(v.begin(), v.end());

    ll possibleValues = n, i = n-1, wins = 0;
    while(possibleValues > 0 && i >= 0) {
        ll requiredValues = (d + v[i] - 1)/v[i];
        if(requiredValues*v[i] == d)
            requiredValues++;
        if(requiredValues > possibleValues)
            break;
        possibleValues -= requiredValues;
        i--;
        wins++;
    }

    cout << wins << "\n";
}