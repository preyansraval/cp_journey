#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int arr[n+1];
        for(int i = 1;i < n+1;i++) {
            cin>>arr[i];
        }

        ll pos = 0;
        ll rem_neg = 0;
        for(int i = 1;i < n+1;i++) {
            if(arr[i] >= 0) {
                pos += arr[i];
            }
            else {
                if(pos >= abs(arr[i])) {
                    pos -= abs(arr[i]);
                }
                else {
                    rem_neg += abs(arr[i]) - pos;
                    pos = 0;
                }
            }
        }

        cout << rem_neg << endl;
    }
}