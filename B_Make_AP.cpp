#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll a, b, c;
    cin >> a >> b >> c;
    
    ll new_a = 2*b - c;
    ll new_b = (a+c)/2;
    ll new_c = 2*b - a;

    if(new_a/a > 0 && new_a % a == 0)
        cout << "YES\n";
    else if(new_b/b > 0 && new_b % b == 0 && (c-a)%2 == 0)
        cout << "YES\n";
    else if(new_c/c > 0 && new_c % c == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}