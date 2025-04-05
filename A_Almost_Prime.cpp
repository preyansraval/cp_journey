#include <bits/stdc++.h>
using namespace std;

vector<int> get_spf(int n) {
    vector<int> spf(n+1);

    for(int i = 0;i <= n;i++) {
        spf[i] = i;
    }

    for(int i = 2;i*i <= n;i++) {
        if(spf[i] == i) {
            for(int j = i*i;j <= n;j+=i) {
                spf[j] = min(spf[j], i);
            }
        }
    }

    return spf;
}

int findAlmostPrimes(vector<int>& spf, int n) {
    int count = 0;
    for(int i = 2;i <= n;i++) {
        bool flag = true;
        vector<int> temp(n+1);
        int val = i;
        while(val != 1) {
            temp[spf[val]]++;
            val /= spf[val];
        }
        int tempCnt = 0;
        for(int j = 0;j <= n;j++) {
            if(tempCnt > 2) {
                flag = false;
                break;
            }
            else if(temp[j] > 0)
                tempCnt++;
        }

        if(flag && tempCnt == 2)
            count++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;

    vector<int> spf = get_spf(n);

    int res = findAlmostPrimes(spf, n);
    cout << res << "\n";
}