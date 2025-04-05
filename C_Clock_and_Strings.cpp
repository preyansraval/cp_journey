#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n-- > 0) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int na = min(a, b);
        int nb = max(a,b);
        int nc = min(c, d);
        int nd = max(c, d);

        if((nc < na && nd > nb) || (nc > na && nd < nb) || (nc > na && nc > nb && nd > na && nd > nb) || (nc < na && nc < nb && nd < na && nd < nb))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}