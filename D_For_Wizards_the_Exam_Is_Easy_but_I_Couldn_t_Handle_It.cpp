#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i =0;i < n;i++)
            cin >> a[i];
        
        int bestl = 0, bestr = 0;
        int diff = 0;
        for(int i = 0;i < n;i++) {
            int g = 0, s = 0;
            for(int j = i+1;j < n;j++) {
                if(a[j] > a[i])
                    g++;
                else if(a[j] < a[i])
                    s++;
                
                int temp = g-s;
                if(temp < diff) {
                    diff = temp;
                    bestl = i;
                    bestr = j;
                }
            }
        }
        cout << bestl + 1 << " " << bestr + 1 << "\n";
    }
    return 0;
}