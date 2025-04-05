#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(auto& i : a)
            cin >> i;
        
        bool isSorted = true;
        for(int i = 0;i < n-1;i++) {
            if(a[i] > a[i+1])
                isSorted = false;
        }

        if(!isSorted && k == 1)
            cout << "NO" << "\n";
        else
            cout << "YES" << "\n";
    }
    return 0;
}

//tc - O(n)
//sc - O(1)