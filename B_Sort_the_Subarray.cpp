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
        int n;
        cin >> n;
        
        int a1[n];
        int a2[n];

        for(int i = 0;i < n;i++)
            cin >> a1[i];

        for(int i = 0;i < n;i++)
            cin >> a2[i];
        
        int l = 0, r = n-1;
        while(l < n && a1[l] == a2[l])
            l++;
        
        while(r >= 0 && a1[r] == a2[r])
            r--;
        
        while(l > 0 && a2[l] >= a2[l-1])
            l--;
        
        while(r < n-1 && a2[r] <= a2[r+1])
            r++;
        
        cout << l+1 << " " << r+1 << "\n";
    }
    return 0;
}