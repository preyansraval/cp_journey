#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll factorial(int N) {
    if(N == 0)
        return 1ll;
    
    return 1ll * N * factorial(N-1);
}

int main() {
    int N;
    cin >> N;

    cout << factorial(N);
}