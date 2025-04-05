#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<char>> mat, int n,int m) {
    int total = n*m;
    int min_r = 0, min_c = 0;
    int max_r = n-1, max_c = m-1;
    int count = 0;
    int temp = 0;
    while(temp != total) {
        vector<char> v;
        //upper wall
        for(int i = min_r, j = min_c;j <= max_c && temp < total;j++) {
            v.push_back(mat[i][j]);
            temp++;
        }
        min_r++;

        //Right Wall
        for(int i = min_r, j = max_c;i <= max_r && temp < total;i++) {
            v.push_back(mat[i][j]);
            temp++;
        }
        max_c--;

        //Bottom Wall
        for(int i = max_r, j = max_c;j >= min_c && temp < total;j--) {
            v.push_back(mat[i][j]);
            temp++;
        }
        max_r--;

        //Left Wall
        for(int i = max_r, j = min_c;i >= min_r && temp < total;i--) {
            v.push_back(mat[i][j]);
            temp++;
        }
        min_c++;
        int size = v.size();
        for(int x = 0;x < size;x++) {
            if(v[(x%size)] == '1' && v[(x+1)%size] == '5' && v[(x+2)%size] == '4' && v[(x+3)%size] == '3')
                count++;
        }
        v.erase(v.begin(), v.end());
    }
    cout << count << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<char>> mat(n, vector<char>(m));
        for(int i = 0;i < n;i++) {
            string temp;
            cin >> temp;

            for(int j = 0;j < m;j++)
                mat[i][j] = temp[j];
        }
        
        solve(mat, n, m);
    }
}