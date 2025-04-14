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
        
        int sum = 0;
        for(int num : a)
            sum += num;
        
        if(sum & 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}