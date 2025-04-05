#include <bits/stdc++.h>
using namespace std;

void countFactors(int x) {
    int count = 0;
    for(int i = 1;i *i <= x;i++) {
        if(x % i == 0) {
            if(i == (x/i))
                count++;
            else
                count += 2;
        }
    }
    cout << count << "\n";
}

int main() {
    int n;
    cin >> n;
    while(n--) {
        int x;
        cin >> x;
        countFactors(x);
    }
    return 0;
}