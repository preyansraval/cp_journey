#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int arr[300000];
    arr[0] = 0;
    for(int i = 1;i <300000;i++) {
        arr[i] = (arr[i-1] ^ i);
    }
    int t;
    cin >> t;
    while(t-- > 0) {
        int a, b;
        cin >> a >> b;

        int xori = arr[a-1];

        if(xori == b) {
            cout << a << "\n";
        }
        else if((xori ^ b) == a) {
            cout << a + 2 << "\n";
        }
        else {
            cout << a + 1 << "\n";
        }
    }
    return 0;
}