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
        
        int count = 0;
        for(int i = n-2;i >= 0;i--) {
            while(a[i] != 0 && a[i] >= a[i+1]) {
                a[i] /= 2;
                count++;
            }

            if(a[i] == a[i+1]) {
                count = -1;
                break;
            }
        }

        cout << count << "\n";
    }
    return 0;
}