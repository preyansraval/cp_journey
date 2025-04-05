#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int ans = 0;
    cin >> n;
    for(int i = 0;i < n;i++) {
        int opinion;
        cin >> opinion;
        ans = (ans | opinion);
    }
    if(ans == 1)
        cout << "HARD";
    else
        cout << "EASY";
    return 0;
}