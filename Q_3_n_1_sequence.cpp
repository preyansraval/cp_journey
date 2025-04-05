#include <bits/stdc++.h>
using namespace std;
#define ll long long

int countSequence(int N) {
    if(N == 1)
        return 1;
    
    if(N % 2 == 0)
        return 1 + countSequence(N/2);
    else
        return 1 + countSequence(3*N + 1);
}

int main() {
    int N;
    cin >> N;

    cout << countSequence(N);
    return 0;
}