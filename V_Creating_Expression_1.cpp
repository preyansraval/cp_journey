#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool canCreateExpr(ll A[], ll idx, ll val, ll X, ll N) {
    if(idx == N)
        return (val == X);
    
    return canCreateExpr(A, idx+1, val-A[idx], X, N) || canCreateExpr(A, idx+1, val+A[idx], X, N);
}

int main() {
    ll N, X;
    cin >> N >> X;
    ll A[N];
    for(ll i = 0;i < N;i++)
        cin >> A[i];
    
    bool ans = canCreateExpr(A, 1, A[0], X, N);
    if(ans)
        cout << "YES";
    else
        cout << "NO";
}