#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t-- > 0) {
        int n, H, M;
        cin>>n>>H>>M;
        int sleep_time = H * 60 + M;
        int ans = INT_MAX;
        for(int i = 0;i < n;i++) {
            int h, m;
            cin>>h>>m;
            int alarm_time = h*60 + m;
            int diff = alarm_time - sleep_time;
            if(diff < 0) diff += 1440;

            ans = min(ans, diff);
        }
        cout << ans/60 << " " << ans % 60 << endl;
    }
}