#include <bits/stdc++.h>
using namespace std;

void solve(char b[10][10]) {
    int score = 0;
    for(int s = 1;s <= 5;s++) {
        int minr = s - 1, minc = s-1;
        int maxr = 10 - s, maxc = 10 - s;
        int size = 2*(maxc - minc + 1) + 2*(maxr - minr + 1) - 4;
        //upper wall
        for(int i = minr, j = minc;j <= maxc;j++) {
            if(b[i][j] == 'X')
                score += s;
            size--;
        }
        minr++;

        //right wall
        for(int i = minr,j = maxc;i <= maxr;i++) {
            if(b[i][j] == 'X')
                score += s;
            size--;
        }
        maxc--;

        //bottom wall
        for(int i = maxr, j = maxc;j >= minc;j--) {
            if(b[i][j] == 'X')
                score += s;
            size--;
        }
        maxr--;

        //left wall
        for(int i = maxr,j = minc;i >= minr;i--) {
            if(b[i][j] == 'X')
                score += s;
            size--;
        }
    }
    cout << score << "\n";
}

//tc - O(1)
//sc - O(1)

int main() {
    int t;
    cin >> t;
    while(t--) {
        char board[10][10];

        for(int i = 0;i < 10;i++) {
            for(int j = 0;j < 10;j++)
                cin >> board[i][j];
        }

        solve(board);
    }
}