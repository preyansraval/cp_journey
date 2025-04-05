#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long arr[n];
    for(int i = 0;i < n;i++) {
        cin >> arr[i];
    }

    long long preArr[n];
    preArr[0] = arr[0];
    for(int i = 1;i < n;i++) {
        preArr[i] = preArr[i-1] + arr[i];
    }

    sort(arr, arr + n);
    long long preSorted[n];
    preSorted[0] = arr[0];
    for(int i = 1;i < n;i++) {
        preSorted[i] = preSorted[i-1] + arr[i];
    }

    long long m;
    cin >> m;
    while(m-- > 0) {
        long long type, l, r;
        cin >> type >> l >> r;

        if(type == 1) {
            long long val = (l == 1 ? preArr[r-1] : (preArr[r-1] - preArr[l-2]));
            cout << val << endl;
        }
        else {
            long long val = (l == 1 ? preSorted[r-1] : (preSorted[r-1] - preSorted[l-2]));
            cout << val << endl;
        }
    }
    return 0;
}