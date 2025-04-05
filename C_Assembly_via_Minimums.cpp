#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int size = (n*(n-1))/2;
        vector<ll> v(size);
        for(auto &i : v)
            cin >> i;
        
        sort(v.begin(), v.end());

        vector<ll> res;
        int val = n;
        n = n-1;
        for(int i = 0;i < v.size();i += n, n--) {
            res.push_back(v[i]);
        }

        if(res.size() != val)
            res.push_back(v[v.size() - 1]);
        
        for(auto i : res)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}