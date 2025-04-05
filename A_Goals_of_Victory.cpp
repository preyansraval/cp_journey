#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n-1);
        for(auto &i : a)
            cin >> i;
        
        int sum = accumulate(a.begin(), a.end(), 0);

        cout << -sum << "\n";
    }
}

//tc - O(n)
//sc - O(1)