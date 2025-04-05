#include <bits/stdc++.h>
using namespace std;

int maxPathSum(vector<vector<int>> mat, int r, int c, int N, int M) {
    if(r == N-1 && c == M-1)
        return mat[r][c];
    
    if(r >= N || c >= M)
        return INT_MIN;

    return max(maxPathSum(mat, r+1, c, N, M), maxPathSum(mat, r, c+1, N, M)) + mat[r][c];
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> mat(N, vector<int>(M, 0));
    for(auto& i : mat) {
        for(auto& j : i) {
            cin >> j;
        }
    }

    int maxSum = maxPathSum(mat, 0, 0, N, M);
    cout << maxSum;
}