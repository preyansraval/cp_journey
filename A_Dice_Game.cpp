#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int pCount = 0, neutralCount = 0, pyCount = 0;
    int n = 6;

    for(int i = 1;i <= 6;i++) {
        if(abs(a-i) < abs(b-i))
            pCount++;
        else if(abs(a-i) > abs(b-i))
            pyCount++;
        else
            neutralCount++;
    }

    cout << pCount << " " << neutralCount << " " << pyCount << "\n";
    return 0;
}