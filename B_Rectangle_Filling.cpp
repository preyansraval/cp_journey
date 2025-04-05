#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(ll n, ll m, vector<vector<char>> board) {
    string ans = "YES";
    //check the corners
    if(board[0][0] == board[n-1][m-1] || board[0][m-1] == board[n-1][0]) {
        cout << ans << "\n";
        return;
    }

    bool possible = false;
    //check first and last row
    for(ll j=0;j < m-1;j++) {
        if(board[0][j] != board[0][j+1] || board[n-1][j] != board[n-1][j+1]) {
            possible = true;
            break;
        }
    }

    //check first and last column
    for(ll i = 0;i < n-1;i++) {
        if(board[i][0] != board[i+1][0] || board[i][m-1] != board[i+1][m-1]) {
            possible = true;
            break;
        }
    }

    if(possible)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while(t--) {
        cout << "Inside" << "\n";
        ll n, m;
        cin >> n >> m;
        vector<vector<char>> board;
        for(ll i = 0;i < n;i++) {
            for(ll j = 0;j < m;j++) {
                cin >> board[i][j];
            }
        }   
        cout << "Calling solve()" << "\n";
        solve(n, m, board);
    }
    return 0;
}