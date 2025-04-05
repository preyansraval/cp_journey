#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, q;
        cin >> n >> q;
        
        vector<ll> a(n);
        for(auto &i : a)
            cin >> i;
        
        while (q--) {
        int x;
        cin >> x;

        vector<ll> new_slimes = a;
        new_slimes.push_back(x);

        ll eaten = 0;
        ll i = n; 

        while (i > 0) {
            if (new_slimes[i] >= new_slimes[i - 1]) {

                new_slimes[i - 1] = new_slimes[i] ^ new_slimes[i - 1];
                i--;
                eaten++;
            } else {
                break; 
            }
        }
        cout << eaten << " ";
    }
    cout << "\n";
    }
}