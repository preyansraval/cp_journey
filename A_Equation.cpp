#include <bits/stdc++.h>
using namespace std;

bool isComposite(int num) {
    int count = 0;
    for(int i = 1;i * i <= num;i++) {
        if(num % i == 0) {
            if(i == num/i)
                count++;
            else
                count += 2;
        }
    }

    if(count > 2)
        return true;
    return false;
}

int main() {
    int n;
    cin >> n;
    int b = 4;
    while(true) {
        bool flag = isComposite(b) && isComposite(n+b);
        if(flag)
            break;
        b++;
    }

    cout << (n+b) << " " << b;
}