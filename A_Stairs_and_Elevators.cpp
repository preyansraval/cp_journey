#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll findNearestToLeft(ll y, vector<ll> v) {
    ll l = 0, r = v.size();
    while(l != r) {
        ll m = l + (r - l)/2;
        if(v[m] <= y) {
            l = m;
        }
        else
            r = m - 1;
    }
    return v[l];
}

ll findNearestToRight(ll y, vector<ll> v) {
    return *lower_bound(v.begin(), v.end(), y);
}

ll solve(ll n, ll m, ll cl, ll ce, ll v, vector<ll> stairs, vector<ll> elevs, ll x1, ll y1, ll x2, ll y2) {
    cout << "Inside solve >>>> \n";
    if(x1 == x2)
        return abs(y2 - y1);

    ll ans = 0;
    // For Stairs
    ll nsl = findNearestToLeft(y1, stairs);
    // Calculate the time using nsl
    ll timeNsl = abs(y1 - nsl) + abs(x1 - x2) + abs(y2 - nsl);
    ll nsr = findNearestToRight(y1, stairs);
    // Calculate the time using nsr
    ll timeNsr = abs(y1 - nsl) + abs(x1 - x2) + abs(y2 - nsl);
    ans = min(ans, min(timeNsl, timeNsr));

    // For Elevators
    ll nel = findNearestToLeft(y1, elevs);
    // Calculate the time using nel
    ll timeNel = abs(y1 - nel) + (abs(x1 - x2) + v - 1)/v + abs(y2 - nel);

    ll ner = findNearestToRight(y1, elevs);
    // Calculate the time using ner
    ll timeNer = abs(y1 - ner) + (abs(x1 - x2) + v - 1)/v + abs(y2 - ner);
    ans = min(ans, min(timeNel, timeNer));

    return ans;
}

int main() {
    ll n, m, cl, ce, v;
    cin >> n >> m >> cl >> ce >> v;
    cout << "Inside main >>>> \n";
    vector<ll> stairs(cl), elevs(ce);
    for(auto& i : stairs)
        cin >> i;
    
    for(auto& i : elevs)
        cin >> i;
    
    ll q;
    cin >> q;
    while(q--) {
        ll x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        solve(n, m, cl, ce, v, stairs, elevs, x1, y1, x2, y2);
    }
}