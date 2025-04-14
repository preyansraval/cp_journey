#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for(auto &i : a)
            cin >> i;
        
        sort(a.begin(), a.end());

        int i = 0;
        vector<int> b, c;

        while(i < n-1 && a[i] == a[i+1]) {
            i++;
        }

        if(i == n-1)
            cout << -1 << "\n";
        else {
            cout << (i+1) << " " << (n-i-1) << "\n";
            for(int x = 0;x <= i;x++)
                cout << a[x] << " ";
            cout << "\n";
            for(int x = i+1;x < n;x++)
                cout << a[x] << " ";
            cout << "\n";
        }
    }
    return 0;
}