#include <bits/stdc++.h>
using namespace std;
int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};
int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        int x1, y1;
        cin >> x1 >> y1;
        int x2, y2;
        cin >> x2 >> y2;

        set<pair<int, int>> m1, m2;

        for(int i = 0;i < 4;i++) {
            m1.insert({x1 + dx[i]*a, y1 + dy[i]*b});
            m1.insert({x1 + dx[i]*b, y1 + dy[i]*a});
            m2.insert({x2 + dx[i]*a, y2 + dy[i]*b});
            m2.insert({x2 + dx[i]*b, y2 + dy[i]*a});
        }

        int count = 0;
        for(auto i : m1) {
            if(m2.find(i) != m2.end())
                count++;
        }

        cout << count << "\n";
    }
    return 0;
}
//tc - O(1)
//sc - O(1)