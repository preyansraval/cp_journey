#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for(auto& i : a) {
        cin >> i;
    }

    sort(a.begin(), a.end());

    for(int i = 0;i < n;i++)
        cout << a[i] << " ";
}