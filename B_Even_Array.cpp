#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t-- > 0) {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0;i < n;i++) {
            cin >> arr[i];
        }

        int count = 0;
        for(int i = 0;i < n;i++) {
            if(arr[i] % 2 == 0) count++;
        }

        if(count != (n+1)/2)
            cout << -1 << endl;
        else {
            int cnt = 0;
            for(int i = 0;i < n;i++) {
                if(i % 2 == 0 && arr[i] % 2 != 0)   cnt++;
            }

            cout << cnt << endl;
        }
    }
    return 0;
}