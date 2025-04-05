#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    for(int i = 2;i*i <= num;i++) {
        if(num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> primes;
    for(int i = 2;i <= n;i++) {
        if(isPrime(i))
            primes.push_back(i);
    }

    int count = 0;
    bool flag = false;
    for(int i = 1;i <= primes.size();i++) {
        int num = primes[i-1] + primes[i] + 1;
        if(isPrime(num) && num <= n)
            count++;
        
        if(count == k) {
            flag = true;
            break;
        }
    }

    if(flag)
        cout << "YES";
    else
        cout << "NO";
}