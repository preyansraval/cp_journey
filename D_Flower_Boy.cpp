#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(vector<ll> a, vector<ll> b, ll m, ll beauty) {
    ll i = 0, j = 0, n = a.size(), count = 0;
    while(i < n && j < m) {
        if(a[i] >= b[j]) {
            count++;
            i++;
            j++;
        }
        else if(a[i] < b[j] && beauty >= b[j] && beauty != -1) {
            count++;
            j++;
            beauty = -1;
        }
        else {
            i++;
        }
    }

    return count >= m;
}

vector<ll> helper(vector<ll> a, vector<ll> b, ll n, ll m) {
    vector<ll> v(m+1, n+5);
    v[0] = 0;
    ll j = 1;
    for(ll i = 1;i <= m;i++) {
        while(j <= n && a[j] < b[i])
            j++;
        if(j <= n) {
            v[i] = j;
            j++;
        }
        else
            break;
    }
    return v;
}

int helper2(vector<ll> a, vector<ll> b, ll n, ll m) {
    vector<ll> v1 = helper(a, b, n, m);
        if(v1[m] < n+5) {
            return 0;
        }

        vector<ll> tempa(n+1,0), tempb(m+1,0);
        for(ll i = 1;i <= n;i++) {
            tempa[i] = a[n-i+1];
        }

        for(ll i = 1;i <= m;i++)
            tempb[i] = b[m-i+1];
        vector<ll> v2 = helper(tempa, tempb, n, m);
        vector<ll> res(m+2, 0);
        for(ll i = 1;i <= m;i++) {
            ll idx = m - i + 1;
            if(v2[idx] < n+5)
                res[i] = n - v2[idx] + 1;
            else
                res[i] = 0ll;
        }
        res[m+1] = n+1;

        ll ans = LLONG_MAX;
        for(ll i = 1;i <= m;i++) {
            if(v1[i-1] < res[i+1])
                ans = min(ans, b[i]);
        }

        if(ans == LLONG_MAX)    
            return -1;
        else
            return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while(t-- > 0) {
        ll n, m;
        cin >> n >> m;
        vector<ll> a(n+1), b(m+1);
        for(ll i = 1;i <= n;i++)
            cin >> i;
        for(ll i = 1;i <= m;i++)
            cin >> i;
        
        int res = helper2(a, b, n, m);
        cout << res << "\n";
    }
    return 0;
}