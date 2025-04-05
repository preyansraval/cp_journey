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
        for(int i = 0;i < n;i++)
            cin >> a[i];
        
        sort(a.begin(), a.end());

        ll al = 0, bob = 0;
        for(int i = n-1;i >= 0;i--) {
            if(n%2 != 0) {
                if(i%2 == 0 && a[i]%2 == 0)
                    al += a[i];
                else if(i%2 != 0 && a[i]%2 != 0)
                    bob += a[i];
            }
            else {
                if(i%2 != 0 && a[i]%2 == 0)
                    al += a[i];
                else if(i%2 == 0 && a[i]%2 != 0)
                    bob += a[i];
            }
        }

        if(al == bob)
            cout << "Tie" << "\n";
        else if(al > bob)
            cout << "Alice" << "\n";
        else
            cout << "Bob" << "\n";
    }
}