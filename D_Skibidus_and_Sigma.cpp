#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Temp {
    ll sum;
    ll score;
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;

        vector<Temp> a(n);
        ll constant =  0ll;
        for(int i = 0;i < n;i++) {
            ll sum_i = 0;
            ll csum_i = 0;
            ll score_i = 0;
            for(int j = 0;j < m;j++) {
                ll x;
                cin >> x;
                sum_i += x;
                csum_i += x;
                score_i += csum_i;
            }
            a[i].sum = sum_i;
            a[i].score = score_i;
            constant += score_i;
        }

        sort(a.begin(), a.end(), [](const Temp &A, const Temp &B){return A.sum > B.sum;});

        ll add = 0;
        for(int i = 0;i < n;i++) {
            add += (ll)(n-i-1)*(a[i].sum);
        }

        ll ans = constant + (ll)m * add;
        cout << ans << "\n";
    }
    return 0;
}