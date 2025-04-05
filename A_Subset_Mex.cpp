#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while(t-- > 0) {
        ll n;
        cin >> n;
        ll arr[n];
        for(ll i = 0;i < n;i++)
            cin >> arr[i];
        
        ll freq[101];
        for(ll i = 0;i < 101;i++)
            freq[i] = 0;
        for(ll i = 0;i < n;i++) {
            freq[arr[i]]++;
        }

        int mexa = 0;
        while(freq[mexa] >= 1)  mexa++;

        int mexb = 0;
        while(freq[mexb] >= 2)  mexb++;

        cout << mexa + mexb << "\n";
    }
    return 0;
}