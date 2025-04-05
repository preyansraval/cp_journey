#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string T;
    cin >> T;

    int dir = 0;
    int x = 0, y = 0;
    for(int i = 0;i < n;i++) {
        if(T[i] == 'S') {
            if(dir == 0) {
                x++;
            }
            else if(dir == 1) {
                y--;
            }
            else if(dir == 2) {
                x--;
            }
            else {
                y++;
            }
        }
        else {
            dir = (dir + 1) % 4;
        }
    }

    cout << x << " " << y;
}