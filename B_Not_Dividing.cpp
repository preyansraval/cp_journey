#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for(auto &i : a)
            cin >> i;
        
        for(int i = n-1;i >= 0;i--) {
            if(a[i] == 1)
                a[i]++;
        }

        for(int i = 1;i < n;i++) {
            if(a[i] % a[i-1] == 0)
                a[i]++;
        }

        for(int num : a)
            cout << num << " ";
        cout << "\n";
    }
    return 0;

}