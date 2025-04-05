#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while(t-- > 0) {
        long long n, a, b, c;
        cin >> n >> a >> b >> c;
        long long arr[3] {a, b, c};
        long long sum = a + b + c;
        long long days = 0;
        if(n <= sum) {
            for(long long i = 0;i < 3;i++) {
                n = n - arr[i];
                days++;
                if(n <= 0)
                    break;
            }
            cout << days << endl;
        }
        else {
            int rem = n % sum;
            int d = n / sum;
            if(rem == 0) {
                days = d * 3;
                cout << days << endl;
            }
            else {
                n = rem;
                for(int i = 0;i < 3;i++) {
                    n = n - arr[i];
                    days++;
                    if(n <= 0)
                        break;
                }
                cout << days + d*3 << endl;
            }
        }
    }
}