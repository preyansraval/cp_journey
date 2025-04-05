#include <bits/stdc++.h>
using namespace std;
#define ll long long

int f(int a, int b) {
    if(a > b)   return 1;
    if(a == b)  return 0;
    if(a < b)   return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while(t-- > 0) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        
        int res = 0;
        if(f(a1, b1) + f(a2, b2) > 0)
            res++;
        if(f(a1, b2) + f(a2, b1) > 0)
            res++;
        if(f(a2, b1) + f(a1, b2) > 0)
            res++;
        if(f(a2, b2) + f(a1, b1) > 0)
            res++;
        
        cout << res << "\n";
    }
    return 0;
}