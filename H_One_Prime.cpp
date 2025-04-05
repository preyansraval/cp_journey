#include <bits/stdc++.h>
using namespace std;

int main() {
    int X;
    int factors = 0;
    cin >> X;
    for(int i = 1;i*i <= X;i++) {
        if(X % i == 0) {
            if(i != X/i)
                factors += 2;
            else
                factors++;
        }
    }
    if(factors > 2)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}