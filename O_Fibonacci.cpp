#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;
    long long int a = 0;
    long long int b = 1;
    for(int i = 3;i <= N;i++) {
        long long temp = b;
        b = a + b;
        a = temp;
    }
    if(N == 1)  cout << a;
    else    cout << b;
    return 0;
}