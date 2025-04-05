#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> v;
    for(int i = 1;i * i <= N;i++) {
        if(N % i == 0) {
            if(i != N/i) {
                v.push_back(i);
                v.push_back(N/i);
            }
            else
                v.push_back(i);
        }
    }
    sort(v.begin(), v.end());

    for(int i : v) {
        cout << i << endl;
    }
    return 0;
}