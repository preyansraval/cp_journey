#include <bits/stdc++.h>
using namespace std;

bool isLuckyNumber(int n) {
    while(n != 0) {
        int rem = n % 10;
        n /= 10;
        if(rem != 4 && rem != 7)
            return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    if(isLuckyNumber(n)) {
        cout << "YES";
        return 0;
    }

    bool flag = false;
    for(int i = 1; i <= n;i++) {
        if(n % i == 0 && isLuckyNumber(i)) {
            flag = true;
            break;
        } 
    }

    if(flag)
        cout << "YES";
    else
        cout << "NO";
}