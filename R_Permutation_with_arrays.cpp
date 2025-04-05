#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];
    int B[N];
    for(int i = 0;i < N;i++)
        cin >> A[i];
    
    for(int i = 0;i < N;i++)
        cin >> B[i];
    
    sort(A, A + N);
    sort(B, B + N);
    bool flag = true;
    for(int i = 0;i < N;i++) {
        if(A[i] != B[i]) {
            flag = false;
            break;
        }
    }
    if(flag)
        cout << "yes";
    else
        cout << "no";
    return 0;
} 