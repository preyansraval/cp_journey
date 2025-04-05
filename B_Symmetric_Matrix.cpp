#include <bits/stdc++.h>
#define MAXN 105
using namespace std;
int a1[MAXN], a2[MAXN], a3[MAXN], a4[MAXN];

int main() {
    int T;
    int n, m;
    cin >> T;
    while(T-- > 0) {
        cin >> n >> m;
        bool op1 = 0;
        for(int i = 0;i < n;i++) {
            cin >> a1[i] >> a2[i] >> a3[i] >> a4[i];
            if(a2[i] == a3[i])
                op1 = 1;
        }
        if(m & 1 || op1 == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}